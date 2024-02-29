#include "binary_trees.h"

/**
 * binary_trees_ancestor -  program that finds the lowest common ancestor of 
 * two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node,
 *	or NULL if none found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *j, *k;

	if (first == NULL || second == NULL)
		return (NULL);

	j = first;
	while (j != NULL)
	{
		k = second;
		while (k != NULL)
		{
			if (j == k)
				return ((binary_tree_t *)j);
			k = k->parent;
		}
		k = k->parent;
	}
	return (NULL);
}
