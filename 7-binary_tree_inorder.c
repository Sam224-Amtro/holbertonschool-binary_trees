#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 *
 * Description: This function applies the function 'func' to the value of each
 *              node following the inorder traversal (Left -> Node -> Right).
 *              If 'tree' or 'func' is NULL, the function does nothing.
 */
 void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
 {
    if (!tree || !func)
        return;

    
    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}

