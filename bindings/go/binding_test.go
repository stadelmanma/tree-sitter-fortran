package tree_sitter_fortran_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-fortran"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fortran.Language())
	if language == nil {
		t.Errorf("Error loading Fortran grammar")
	}
}
