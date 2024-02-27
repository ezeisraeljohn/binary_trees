#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if a node is the root node of a tree
 * @node: The node to check
 *
 * Return: 1 if node is the root node else zero
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
