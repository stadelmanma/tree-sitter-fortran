use std::{collections::HashSet, fs::read_to_string, path::Path};

use serde_json::{Map, Value};

fn main() {
    let src_dir = std::path::Path::new("src");

    let mut c_config = cc::Build::new();
    c_config.include(src_dir);
    c_config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable")
        .flag_if_supported("-Wno-trigraphs");
    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8");

    let parser_path = src_dir.join("parser.c");
    c_config.file(&parser_path);

    let scanner_path = src_dir.join("scanner.c");
    c_config.file(&scanner_path);
    println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());

    c_config.compile("parser");
    println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());

    let grammar_json_path = src_dir.join("grammar.json");
    println!(
        "cargo:rerun-if-changed={}",
        grammar_json_path.to_str().unwrap()
    );

    let out_dir = std::env::var_os("OUT_DIR").unwrap();
    let keywords_path = Path::new(&out_dir).join("keywords.rs");
    let keywords = generate_keywords(&grammar_json_path);

    let keywords_const = format!(
        r#"/// Keywords of the language
///
/// Note that this list includes keyword arguments to language statements,
/// for example the `kind` and `len` keywords for `character`, as well as
/// the single-word forms of whitespace-optional keywords such as `endif`.
pub const KEYWORDS: &'static [&'static str] = &{:?};"#,
        keywords
    );
    std::fs::write(keywords_path, keywords_const).unwrap();
}

/// Read the `grammar.json` and extract the keywords
fn generate_keywords(grammar_path: &Path) -> Vec<String> {
    let contents = read_to_string(grammar_path).unwrap();
    let json: Map<String, Value> = serde_json::from_str(&contents).unwrap();

    let keywords: HashSet<_> = json["rules"]
        .as_object()
        .expect("has rules")
        .iter()
        .flat_map(|(_, value)| read_value(value))
        .filter(|keyword| !keyword.starts_with('#'))
        .collect();

    let mut keywords: Vec<_> = keywords.into_iter().collect();
    keywords.sort();
    keywords
}

/// Read unnamed aliases -- these are almost certainly (unreserved) keywords
///
/// Note that these include keyword arguments and whitespace-optional forms
fn read_alias(value: &Value) -> Option<String> {
    let object = value.as_object()?;

    if object.get("type")?.as_str() != Some("ALIAS") {
        return None;
    }
    if object.get("named")?.as_bool() != Some(false) {
        return None;
    }
    object.get("value")?.as_str().map(str::to_string)
}


fn read_value(value: &Value) -> Vec<String> {
    if let Some(members) = value.get("members") {
        members
            .as_array()
            .expect("should be array")
            .iter()
            .flat_map(read_value)
            .collect()
    } else if value["type"].as_str().unwrap().starts_with("PREC") {
        read_value(&value["content"])
    } else if let Some(alias) = read_alias(value) {
        vec![alias]
    } else {
        vec![]
    }
}
