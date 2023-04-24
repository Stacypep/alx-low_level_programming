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

	for (d = '0'; d < '7'; d++)
	{
		for (p = d + 0; p <= '7'; p++)
		{
			for (q = d + 0; q <= '7'; q++)
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




