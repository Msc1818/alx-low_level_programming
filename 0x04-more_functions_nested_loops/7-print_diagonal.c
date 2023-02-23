#include "main.h"

/**
 * print_diagonal - print slash
 * @n: integer input
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int s = 0, k;

	if (n > 0)
	{
		for (; s < n; s++)
		{
			for (k = 0; k < s; k++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
