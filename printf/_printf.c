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
    int count = 0;
    int temp = 0;
    va_list print;
    va_start(print, format);
    
    if(format == NULL)
        return -1;

    for(j = 0; format[j]; j++)
    {
        if(format[j] != '%')
        {
        temp = write(1, &format[j], 1);
        count += temp;
        continue;
        }
        if(format[j] == '%')
        {
           
        }
    }
    va_end(print);
    return count;
  }
