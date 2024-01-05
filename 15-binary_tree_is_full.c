#include "binary_trees.h"

/**
 * binary_tree_is_full - Cheacks if a binary tree is full
 * @tree: Points to the root node of the tree to be checked
 *
 * Return: 0 if tree is NULL or not full, 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full(tree));
}

/**
 * is_full - Uses recursion to check if a binary tree is full
 * @tree: Points to the root node of the tree to be checked
 *
 * Return: 1 if tree is full or 0 if tree is not full
 */

int is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree != NULL)
	{
		l = is_full(tree->left);
		r = is_full(tree->right);

		if ((!tree->left && !tree->right) ||
		    (tree->left && tree->right))
			return (l && r ? 1 : 0);
		else
			return (0);
	}
	return (1);
}
