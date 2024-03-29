#include <unistd.h>
#include "main.h"
/**
 * print_char: prints a character to stdout
 * @args: variadic parameter
 *
 * Return number of characters printed
 */

int print_char(va_list print)
{
	char c = va_arg(print, char);
	int count = 0;

	if (c)
	{
		write(1, &c, 1);
	}
	return(0);
}
