#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * colomne
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
int n, o, h;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (o = 1; o <= 9; o++)
	{
		h = (n * o);
	if ((h / 10) > 0)
	{
		_putchar((h / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((h % 10) + '0');

	if (o < 9)
	{
		_putchar(',');
	      _putchar(' ');
	}
	}
	_putchar('\n');
	}

}
