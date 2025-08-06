#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least one child in a binary tree
* @tree: Pointer to the root node of the tree to count the number of nodes
*
* Return: Number of nodes with at least one child, or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node, right_node;

/* Si l’arbre = NULL, il ne contient aucun nœud -> retourne 0. */
	if (tree == NULL)
		return (0);

	/* Si le node n'a pas d'enfant à gauche ni à droite = feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Récursion à gauche et à droite */
	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

		return ((left_node + right_node) + 1);
}
