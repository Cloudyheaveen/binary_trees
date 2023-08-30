#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts
 * the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> 4608ace0b04afbbd0a431b43eadf99ba194a6def
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
