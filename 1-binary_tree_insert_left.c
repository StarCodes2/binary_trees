#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Points to the parent node
 * @value: Contains the integer to be stored in the left node
 *
 * Return: Pointer to the new node on success or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent != NULL)
	{
		node = binary_tree_node(parent, value);
		if (node == NULL)
			return (NULL);

		node->left = parent->left;
		parent->left = node;
	}

	return (node);
}
