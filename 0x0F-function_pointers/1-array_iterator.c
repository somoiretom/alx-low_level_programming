#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array to iterate
 * @size: array size
 * @action: pointer to the used func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
