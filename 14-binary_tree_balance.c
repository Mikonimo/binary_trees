#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor 0f a binary tree
 * @tree: pointer to the root node of the tree to be measured
 *
 * Return: the balance factor, if tree is NULL, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}
