#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of abinary_tree
 * @tree: poiner to the root node of the tree ot measure the height
 *
 * Return: the height, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = 0;
	size_t right_height = 0;

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		right_height = binary_tree_height(tree->right) +  1;
	}

	return (left_height > right_height ? left_height : right_height);
}
