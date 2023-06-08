#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary number as a string
 * Return: The converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int calculus = 0;
	int count = 0;
	int i;

	if (!b)
		return (0);

	while (b[count])
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (calculus);
}
