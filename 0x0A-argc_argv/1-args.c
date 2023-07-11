#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: arguments counter
 * @argv: stores arguments in array 
 *
 * Return: Always 0 
 */

int main (int argc, char **argv[])
{
 	 (void) argv;
        printf("%d\n", argc);

    return 0;
}
