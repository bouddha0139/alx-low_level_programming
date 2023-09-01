#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; // The final result
	int len = 0; // Length of the b string

	if (!b)
		return (0); // Handling null input

	// Calculate the length of the b string
	while (b[len] != '\0')
		len++;

	// Start processing binary digits from right to left
	for (int i = 0; i < len; i++)
	{
		char digit = b[i]; // Get the binary digit at index i

		if (digit != '0' && digit != '1')
			return (0); // If the digit is neither 0 nor 1, return 0

		// Convert the binary digit to an integer value and add it to the result
		result = (result << 1) | (digit - '0');
	}

	return (result); // Return the final result
}

