#include "binary_trees.h"

/**
 * binary_tree_preorder - This function traverses a binary tree with in
 * postorder
 * @tree: The tree to traverse
 * @func: pointer to a function that recieves an integer
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;


	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
