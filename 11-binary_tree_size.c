#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Pointer to the root node of the tree to measure the size of
*
* Return: Size of the tree (number of nodes), or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/* Si l’arbre est vide (NULL), il ne contient aucun nœud, donc on retourne 0. */
	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);

	right_size = binary_tree_size(tree->right);

	return ((left_size + right_size) + 1);
}
