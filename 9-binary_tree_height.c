#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_height - mesure la hauteur d’un arbre binaire
* @tree: pointeur vers la racine de l’arbre
*
* Return: hauteur, ou 0 si tree est NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);

	/* Si le node n'a pas d'enfant à gauche ni à droite, alors c'est une feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

/* Calcul récurcif de la hauteur du sous arbre gauche */
	left_height = binary_tree_height(tree->left);

/* Calcul récurcif de la hauteur du sous arbre droit */
	right_height = binary_tree_height(tree->right);

	/* On retourne la plus grande des deux hauteurs + 1 */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
