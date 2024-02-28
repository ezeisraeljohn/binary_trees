#include "binary_trees.h"

/**
 * binary_tree_depth - Function that calculates the depth of a tree
 * @tree: the node in question
 *
 * Return: Nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}

	return (count);
}
