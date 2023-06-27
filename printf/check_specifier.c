int (*check_specifier(char*))(va_list)
{
    int i;
    
    func_t array[3] = {
    {'c', print_char},
    {'s', print_string},
    {'%', print_percent}
    {NULL, NULL}};
    
    for(i = 0; array[i].t != NULL; i++)
    {
        if (array[i].t == *format)
        {
            reurn(array[i].f);
        }
    }
   return NULL;     
}
