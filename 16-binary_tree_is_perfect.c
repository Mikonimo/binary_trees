#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1, if tree is NULL, 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth;

	if (tree == NULL)
	{
		return (0);
	}
    depth = binary_tree_depth(tree);

    return (is_perfect_recursive(tree, depth, 0));
}
