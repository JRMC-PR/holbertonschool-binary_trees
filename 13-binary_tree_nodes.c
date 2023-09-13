#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast one child node
 * @tree: pointer to the root node of tree
 * Return: 0 if null, otherwise the count of nodes
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
