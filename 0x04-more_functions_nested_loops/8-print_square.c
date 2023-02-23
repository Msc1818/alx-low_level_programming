#include "main.h"

/**
 * print_square - prints square
 * @size: square'size
 * Return: ALways 0
 */

void print_square(int size)
{
	int s = 0, k;

	if (size > 0)
	{
		for (; s < size; s++)
		{
			for (k = 0; k < size; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

