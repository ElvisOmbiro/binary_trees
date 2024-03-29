#include "binary_trees.h"

/**
 * binary_tree_size - a program that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of binary tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftsize, rightsize;

	if (tree)
	{
		leftsize = binary_tree_size(tree->left);
		rightsize = binary_tree_size(tree->right);

		return (leftsize + rightsize + 1);
	}
	return (0);
}
