#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 ( Success )
 */

int main(void)

{
	int d, p, q;

	for (d = '0'; d < '6'; d++)
	{
		for (p = d + 1; p <= '6'; p++)
		{
			for (q = d + 1; q <= '6'; q++)
			{
				if ((p != d) != q)
				{
					putchar(d);
					putchar(p);
					putchar(q);
					if (d == '5' && p == '7')
					continue;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}




