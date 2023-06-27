#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

int _printf(const char *format, ...);
/**
 * struct func - struct for specifier to print
 * @t: character to compare
 * @f: function that handles the printing
 */
 typedef struct func
 {
    char *t;
    int (*f)(va_list);
 }
int print_char(va_list print);
#endif // MAIN_H_INCLUDED
