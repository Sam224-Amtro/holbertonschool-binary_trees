#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 *
 * Return: Always 0
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
	tree = NULL;
}
