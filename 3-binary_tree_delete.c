#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(node->left);
	binary_tree_delete(node->right);

	free(tree);
}
