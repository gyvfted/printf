#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned int num = 42;

    custom_printf("Binary representation of %u is: %b\n", num, num);

    return (0);
}

