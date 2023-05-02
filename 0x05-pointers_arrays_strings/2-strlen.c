#include "main.h"
#include <stdio.h>

/**
 * _strien - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strien(char *s)
{
	int j;
	
	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

