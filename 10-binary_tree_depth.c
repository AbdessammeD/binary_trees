#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: the binary tree to be measured
 *
 * Return: depth of a node. 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		d++;
		tree = tree->parent;
	}

	return (d);
}
