#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - prints a number.
 * @i : integer
 * Return: 0 (Sucess)
 */
void positive_or_negative(int i)
{

	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
