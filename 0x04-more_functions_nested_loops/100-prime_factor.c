#include <stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	unsigned long e = 2;
	unsigned long pf = 0;
	unsigned long X = 612852475143;

	while (X > e)/* B */
	{
		while (X % e == 0)/* C */
		{
			if (e > pf)
				pf = e;
			X /= e;
		}
		e++;/* D */
	}
	printf("%lu\n", pf);
	return (0);
}
