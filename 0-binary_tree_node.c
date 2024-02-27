#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a binary tree node
 * @parent: The parent of the node created
 * @value: The value of the node
 *
 * Return: Pointer to the newly created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/* New nodes dosen't have child so set right and left to null */
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = new_node;
		else if (parent->right == NULL)
			parent->right = new_node;
		else
			parent->left = new_node;
	}
	new_node->n = value;

	return (new_node);
}
