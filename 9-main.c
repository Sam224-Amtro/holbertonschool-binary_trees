#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	binary_tree_t *root;
	size_t height;



	height = binary_tree_height(root);
	printf("Height from %d: %lu\n", root->n, height);
	height = binary_tree_height(root->right);
	printf("Height from %d: %lu\n", root->right->n, height);
	height = binary_tree_height(root->left->right);
	printf("Height from %d: %lu\n", root->left->right->n, height);
	return (0);
}
