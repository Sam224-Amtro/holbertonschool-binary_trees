#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_preorder - Goes through a binary tree using pre-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node's value
*
* Description: This function applies the function 'func' to the value of each
*              node following the pre-order traversal (Node -> Left -> Right).
*              If 'tree' or 'func' is NULL, the function does nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
