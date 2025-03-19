# tree-sitter-fortran

![Build Status](https://github.com/stadelmanma/tree-sitter-fortran/actions/workflows/ci.yml/badge.svg?branch=master)

Fortran grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter). Adapted from [this Fortran grammar](http://slebok.github.io/zoo/index.html#fortran_f90_waite-cordy).

## Setup and usage

> [!IMPORTANT]  
> Prefer using the `tree-sitter-cli` installed from `npm` as shown below. This
> is to ensure all developers use the same version of `tree-sitter`, avoiding
> compatibility problems.

Follow these steps to set up and run `tree-sitter-fortran`:

1. **Clone the repository**

2. **Install dependencies**

    ```sh
    npm install
    ```

3. **Generate the parser**

    ```sh
    npm run generate
    ```

4. **Run the tests**

    ```sh
    npm run test
    ```

5. **Update the tests (if needed)**

    If you have modified the grammar and need to update test expectations:

    ```sh
    npm run test -- --update
    ```

6. **Check `highlights.scm` (if needed)**

    If you have changed nodes used in `highlights.scm`, review and update it
    accordingly. Even if tests pass, outdated highlights may need fixing!
