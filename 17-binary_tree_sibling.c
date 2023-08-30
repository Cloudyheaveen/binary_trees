#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a
 * node in a binary tree
 * @node: A pointer to the node to find the sibling of
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> 4608ace0b04afbbd0a431b43eadf99ba194a6def
 * Return: If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
