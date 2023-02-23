#include "main.h"

/**
* print_triangle - prints a triangle line with #
* @size: an int given randomly
* Description: use nested loop
* Return: void. no return.
*/

void print_triangle(int size)
{
	int s, k;

	if (size <= 0)
		_putchar('\n');
	for (s = 0; s < size; s++)
	{
		for (k = size - s - 1; k > 0; k--)
			_putchar(' ');
		for (k = s + 1; k > 0; k--)
			_putchar('#');
		_putchar('\n');
	}
}
