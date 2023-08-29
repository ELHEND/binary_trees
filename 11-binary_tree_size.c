#include "binary_trees.h"

/**
 *  * binary_tree_size - measures the size of a binary tree
 *   *
 *    * @tree: pointer to  root node of the tree to measure the size
 *     * Return: size or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t m = 1;

	if (!tree)
		return (0);

	m += binary_tree_size(tree->left);
	m += binary_tree_size(tree->right);

	return (m);
}
