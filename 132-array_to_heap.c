#include "binary_trees.h"

/**
 *  * array_to_heap - builds a Max Binary Heap tree from an array
 *   *
 *    * @array: pointer to the first element of  array to be converted
 *
 *     * @size: number of elements in  array
 *
 *      * Return: pointer to the root node of the created Binary Heap,
 *
 *       * or NULL on failure
 */

heap_t *array_to_heap(int *array, size_t size)
{
	size_t m;
	heap_t *root = NULL;

	if (!array)
		return (NULL);

	root = heap_insert(&root, array[0]);
	for (m = 1; m < size; m++)
		heap_insert(&root, array[m]);

	return (root);
}
