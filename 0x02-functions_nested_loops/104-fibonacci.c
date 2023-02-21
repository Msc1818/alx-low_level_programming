#include <stdio.h>
/**
 * main - print first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, f, q, f1, f2, q1, q2;

	f = 1;
	q = 2;

	printf("%lu", f);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", q);
		k += f;
		f = q - f;
	}

	f1 = f / 1000000000;
	f2 = f % 1000000000;
	q1 = q / 1000000000;
	q2 = q % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", q1 + (q2 / 1000000000));
		printf("%lu", q2 % 1000000000);
		q1 += f1;
		f1 = q1 - f1;
		q2 += f2;
		f2 = q2 - f2;
	}

	printf("\n");

	return (0);
}
