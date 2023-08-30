#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as
 * the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> 4608ace0b04afbbd0a431b43eadf99ba194a6def
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a right-child,
 * the new node must take its place,
 * and the old right-child must be set as the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
