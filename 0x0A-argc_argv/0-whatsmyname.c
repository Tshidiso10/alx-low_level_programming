#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - prints name of program
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return:0 
 */

int main (int argc, char **argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("argv[%2d]: %s\n", counter, argv[i]);
    }
    return 0;
}
