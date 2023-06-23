#include "variadic_functions.h"
#include <stdarg.h>


/**
 * Returns the sum of all its paramters.
 * n: The number of paramters passed to the function.
 * ...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	unsigned int sum;


	va_start(add, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(add, int);

	va_end(add);
	
	if(n == 0)
		return 0;
	else
		return (sum);
}
