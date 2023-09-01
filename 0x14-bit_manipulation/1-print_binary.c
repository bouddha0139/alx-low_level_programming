#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1; /* Initialize a mask with the rightmost bit set */

    if (n > 1)
        print_binary(n >> 1);

    _putchar((n & mask) + '0');
}

