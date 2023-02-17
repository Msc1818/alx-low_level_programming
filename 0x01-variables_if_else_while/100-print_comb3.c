#include <stdio.h>
#include <stdlib.h>
/**
 * main - advanced program
 * Return: 0
 */
int main(void)
{
	int c;
	int e = 0;

	while (e < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (e != c && e < c)
			{
				putchar('0' + e);
				putchar('0' + c);

				if (c + e != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
