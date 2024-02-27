#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts nodes to the right of its parent node in
 * the binary tree.
 * @parent: The parent node
 * @value: The value of the node
 *
 * Return: Return the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	if (!parent)
	{
		free(new_node);
		return (NULL);
	}

	/**
	 * make @new_node, left child of parent node and old child node, the
	 * left child node of the @new_node only if parent node already had a
	 * child
	 */
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		temp->parent = new_node;
		new_node->right = temp;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
	}
	new_node->n = value;
	new_node->left = NULL;

	return (new_node);
}
