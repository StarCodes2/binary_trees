#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree of type binary_tree_t
 * @tree: Points to the root node of a tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree_left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
