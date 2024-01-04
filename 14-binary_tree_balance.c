#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Points to the root node of the tree to be measured
 *
 * Return: balance factor of the tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_h(tree->left) - binary_tree_h(tree->right));
	return (0);
}

/**
 * binary_tree_h - Measures the height of a binary tree
 * @tree: Points to the root node of the to be measured
 *
 * Return: height of tge tree or 0 if tree is NULL
 */

int binary_tree_h(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			l = 1 + binary_tree_balance(tree->left);
		if (tree->right != NULL)
			r = 1 + binary_tree_balance(tree->right);
		return ((l >= r) ? l : r);
	}

	return (0);
}
