#include "binary_trees.h"

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
			if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
			{
				return (binary_tree_height(tree->left) + 1);
			}
			else
			{
				return (binary_tree_height(tree->right) + 1);
			}
		}
	}
	else
	{
		return (0);
	}
}
