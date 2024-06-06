#include "binary_trees.h"

/**
 * is_perfect_recursive - Helper function to check if tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * @depth: Depth of the leftmost leaf
 * @level: Current level of the node
 * Return: 1 if tree is perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}
