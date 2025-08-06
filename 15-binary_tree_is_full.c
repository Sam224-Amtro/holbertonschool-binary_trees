#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* Si l’arbre est vide (NULL), il ne contient aucun nœud, donc on retourne 0. */
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left == NULL || tree->right == NULL)
        return (0);

    return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);        
}
