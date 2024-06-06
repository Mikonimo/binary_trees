#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right) + 1;
	}

	return (left_height > right_height ? left_height : right_height);
}

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

	int left_height = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;
	int right_height = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
