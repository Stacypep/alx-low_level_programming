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

	for (d = '0'; d < '8'; d++)
	{
		for (p = d + 0; p <= '8'; p++)
		{
			for (q = d + 0; q <= '8'; q++)
			{
				if ((p != d) != q)
				{
					putchar(d);
					putchar(p);
					putchar(q);
					if (d == '1' && p == '8')
					continue;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}




