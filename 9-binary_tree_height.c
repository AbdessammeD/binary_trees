#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: the binary tree to be measured
 *
 * Return: the height. 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return ((l > r) ? (l) : (r));	
}
