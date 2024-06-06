#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *a, *b;

	if (first == NULL || second == NULL)
		return (NULL);

	a = first;
	b = second;

	while (a != b)
	{
		a = (a == NULL) ? second : a->parent;
		b = (b == NULL) ? first : b->parent;
	}

	return ((binary_tree_t *)a);
}

