#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the sibling of a node
 * @node: Points to the node to find its sibling
 *
 * Return: pointer to the nodes uncle if it exist
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	if (node->parent->parent->right == node->parent)
		uncle = node->parent->parent->left;

	return (uncle);
}
