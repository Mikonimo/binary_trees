#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    if (tree == NULL || tree->right == NULL)
        return tree;

    binary_tree_t *old_root = tree;
    binary_tree_t *right_child = tree->right;

    /* Make the right child the new root */
    old_root->right = right_child->left;
    if (right_child->left != NULL)
        right_child->left->parent = old_root;

    right_child->parent = old_root->parent;
    if (old_root->parent != NULL)
    {
        if (old_root->parent->left == old_root)
            old_root->parent->left = right_child;
        else
            old_root->parent->right = right_child;
    }

    right_child->left = old_root;
    old_root->parent = right_child;

    return right_child;
}
