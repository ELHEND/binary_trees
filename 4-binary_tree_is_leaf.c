#include "binary_trees.h"

/**
 *  * binary_tree_is_leaf - checks if  node is  leaf
 *   *
 *    * @node: pointer to  node to check
 *
 *     * Return: 1 if node is  leaf, otherwise 0
 *
 *      * If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
