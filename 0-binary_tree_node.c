#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node of type binary_tree_t
 * @parent: Points to the parent node
 * @value: Contains the value to be stored in the node
 *
 * Return: A pointer to the new node on success or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
