#include "binary_trees.h"

/**
 * binary_tree_insert_left - This inserts nodes to the left of a binary tree
 * @parent: Parent of the node to be inserted
 * @value: The value to insert into the new node
 *
 * Description: This function inserts new node to a binary tree, inserting it
 * to the left of its parent, and if the parent already have a child, that
 * child will be replaced by the new node and then becomes the left child of
 * the new node.
 *
 * Return: Return new_node created or NULL if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		temp->parent = new_node;
		new_node->left = temp;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
		/*new_node->left = NULL;*/
	}
	new_node->n = value;
	/*new_node->right = NULL;*/

	return (new_node);
}
