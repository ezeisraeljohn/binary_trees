#include "binary_trees.h"

/**
 * binary_tree_size - Counting how many nodes is in a tree
 * @tree: The tree
 *
 * Return: the size of the tree or 0 if something happens
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
