#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root
 * @node: the node to be checked
 *
 * Return: 1 if true. 0 if not or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
