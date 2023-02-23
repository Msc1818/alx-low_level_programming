#include <stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	long int a;
	long int x;
	long int b;

	x = 612852475143;
	for (a = 1; a <= x; a++)
	{
		if (x % a == 0)
		{
			if (x == a)
			{
				printf("%ld\x", a);
				break;
			}
			b = x / a;
			x = b;
			a = 1;
		}
	}
	return (0);
}

