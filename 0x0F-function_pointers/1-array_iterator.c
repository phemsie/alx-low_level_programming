#include "function_pointers.h"

/**
 * array_iterator - execute a function given as
 * a parameter on each element of an array
 * @size: size of the array
 * @array: array
 * @action: pointer to the function to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
