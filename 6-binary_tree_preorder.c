#include "binary_trees.h"

/**
 * binary_tree_preorder - This function traverses a binary tree with in
 * preorder
 * @tree: The tree to traverse
 * @func: pointer to a function that recieves an integer
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);

}
