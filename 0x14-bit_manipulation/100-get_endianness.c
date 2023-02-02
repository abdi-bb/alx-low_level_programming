#include "main.h"
#include <stdio.h>

int get_endianness(void)
{
    unsigned int num = 1;
    char *p = (char *) &num;

    return (p[0] == 1);
}

