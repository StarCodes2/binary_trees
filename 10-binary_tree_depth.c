#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Points to the node to be measured
 *
 * Return: depth of the node or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree != NULL)
	{
		if (tree->parent != NULL)
			depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
