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
    unsigned int i;

    array = malloc(size*sizeof(char));

    if(size == 0 || array == NUL)
        return NULL;

    for (i = 0; i < size; i++)
		array[i] = c;

    return (array);
}
