#include <stdio.h>
#include "function_pointers.h"
/**
 * prints each array elem on a newline
 * number of elem to print
 * pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
    j = 0;
	while(j < size)
	{
		action(array[j]);
		j++;
	}
}
