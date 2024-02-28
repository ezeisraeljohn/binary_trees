#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the total number of leaf nodes in a tree
 * @tree: The tree
 *
 * Return: Nothing
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf, right_leaf;

	if (!tree)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);

	return (left_leaf + right_leaf);
}
