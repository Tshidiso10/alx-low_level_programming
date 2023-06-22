#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * array
 * size of elements in array
 * pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	j = 0;
	while (j < size)
	{
		if (cmp(array[j]))
			return (j);
		j++;
	}
	return (-1);
}
