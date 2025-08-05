#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: Always 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}
	for (depth = 0; tree->parent; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
