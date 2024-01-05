#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Points to the node to find its sibling
 *
 * Return: the sibling if it exist
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		sibling = node->parent->right;
	if (node->parent->right == node)
		sibling = node->parent->left;

	return (sibling);
}
