#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that traverses a tree with the in-order style
 * @tree: The tree to traverse
 * @func: Pointer to an int function
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_preorder(tree->left, func);

	func(tree->n);

	binary_tree_preorder(tree->right, func);
}
