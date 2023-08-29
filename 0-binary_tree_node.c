#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: the parent of the current node
 * @value: the value of the node
 *
 * Return: address of the new node created. NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!parent)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
