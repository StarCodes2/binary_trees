#include "binary_trees.h"

/**
 * binary_treesibling - Finds the sibling of a node
 * @node: Points to the node to find its sibling
 *
 * Return: the sibling if it exist
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->lett);
}
