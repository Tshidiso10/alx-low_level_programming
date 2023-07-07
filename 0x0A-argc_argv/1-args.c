#include <stdio.h>
#include "main.h"

int main (int argc, char **argv)
{
    int i;

    for (i = 0; i == argc; i++)
    {
        (void) argv;
        printf("%d\n", i);
    }
    return 0;
}
