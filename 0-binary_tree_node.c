#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
* binary_tree_node - Creates a binary tree node
* @parent: A pointer to the parent node
* @value: The value to put in the new node
*
* Return: A pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
