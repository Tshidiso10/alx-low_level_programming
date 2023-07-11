
#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: Character printed
 *
 * Return: On success 1.
 * If fail, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
