#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left-child of another node
 * @parent: parent of the left child
 * @value: the value of the node
 *
 * Return: the address of the left-child node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	if (parent->left)
		parent->left->n = value;
	else
	{
		node = binary_tree_node(parent, value);
		if (!node)
			return (NULL);
		parent->left->parent = node;
		node->left = parent->left;
	}
	return (node);
}
