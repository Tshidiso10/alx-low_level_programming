#include <unistd.h>
#include "main.h"

/*
 * _printf - prints a string
 * @format: string to output (char*)
 * @...: variadic number of parameters
 * Return: characters printed
 */

  int _printf(const char *format, ...)
  {
    int j;

    for(j = 0; format[j]; j++)
    {
        write(1, &format[j], 1);
    }

    return 0;
  }
