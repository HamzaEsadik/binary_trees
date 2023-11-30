#include "binary_trees.h"

/**
 * maxn - the max
 * @a: first element
 * @b: secon element
 *
 * Return: the max number
*/
size_t maxn(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (binary_tree_is_leaf(tree) == 1)
		{
			return (0);
		}
		else
		{
			size_t left_height = binary_tree_height(tree->left);
			size_t right_height = binary_tree_height(tree->right);

			return 1 + maxn(left_height, right_height);
		}
	}
	else
	{
		return (0);
	}
}
