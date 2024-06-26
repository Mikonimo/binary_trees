#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth, if tree is null must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1, if tree is NULL, 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
	{
		return (0);
	}
	depth = binary_tree_depth(tree);

	return (is_perfect_recursive(tree, depth, 0));
}
