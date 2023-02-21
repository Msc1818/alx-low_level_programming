#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
	long int q, a = 1, b = 2, s = 0, st = 0;

	for (q = 0; q < 49; q++)
	{
		if ((b % 2 == 0) && (b <= 4000000))
		{
			st += b;
		}
		s = a + b;
		a = b;
		b = s;

	}
	printf("%ld\n", st);
	return (0);
}
