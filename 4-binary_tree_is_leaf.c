#include "binary_trees.h"

/**
 * binary_tree_is_lead - function to check if node is a leaf
 * @node: pointer to the node you are checking
 * Return: 1 if its a leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
