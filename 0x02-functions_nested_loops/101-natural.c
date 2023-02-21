#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h, sum = 0;

	for (h = 0; i < 1024; h++)
	{
		if ((h % 5) == 0 || (h % 3) == 0)
			sum += h;
	}
	printf("%d\n", sum);
	return (0);
}
