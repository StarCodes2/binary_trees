#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Cheacks if a binary tree is perfect
 * @tree: Points to the root node of the tree to be checked
 *
 * Return: 0 if tree is NULL or not perfect, 1 if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full, balance;

	if (tree == NULL)
		return (0);

	full = is_full(tree);
	balance = binary_tree_h(tree->left) - binary_tree_h(tree->right);
	return (full && !balance ? 1 : 0);
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

/**
 * binary_tree_h - Measures the height of a binary tree
 * @tree: Points to the tree to be measured
 *
 * Return: height of the tree or 0 if tree is NULL
 */

int binary_tree_h(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree)
	{
		l = r = 1;
		if (tree->left)
			l = 1 + binary_tree_h(tree->left);
		if (tree->right)
			r = 1 + binary_tree_h(tree->right);
		return (l > r ? l : r);
	}

	return (0);
}
