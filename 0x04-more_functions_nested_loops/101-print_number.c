#include "main.h"
/**
 * print_number - prints an integer number
 * @n:.input integer parameter
 *
 *
 */
void print_number(int n)
{
	unsigned int f = n;

	if (n < 0)
	{
		_putchar(45);
		f = -f;
	}
	if (f / 10)
	{
		print_number(f / 10);
	}
	_putchar(f % 10 + '0');
}

