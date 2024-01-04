#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Points to the root node of the tree whose leave is to be counted
 *
 * Return: number of leaves in the binary tree or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (++count);
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}

	return (count);
}
