#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of size size 
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, 
 * NULL if fail
 */


char *create_array(unsigned int size, char c)
{
    char *array;
    size_t i;

    array = malloc(size*sizeof(char));

    if(size == 0)
        return NULL;

    if(array == NULL)
        return NULL;

    for (i = 0; i < size; i++)
		array[i] = c;

    return (array);
}
