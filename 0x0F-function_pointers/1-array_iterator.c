#include "function_pointers.h"

/**
 * array_iterator - maps and arrey through a function pointer
 * @array: the int arrey
 * @size: the arrey size
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
