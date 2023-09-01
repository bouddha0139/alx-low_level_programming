void print_binary(unsigned long int n)
{
	/* Check if the number is greater than 1. */
	if (n > 1)
	{
		/* Print the binary representation of the number divided by 2. */
		print_binary(n >> 1);
	}

	/* Print the least significant bit of the number. */
	_putchar((n & 1) + '0');
}

