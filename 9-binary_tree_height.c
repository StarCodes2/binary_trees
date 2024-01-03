#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: Points to the root node
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		r = 1 + binary_tree_height(tree->right);

	if (l >= r)
		return (l);
	else
		return (r);
}
