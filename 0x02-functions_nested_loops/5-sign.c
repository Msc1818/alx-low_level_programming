#include "main.h"
/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero.
 *
 * @n: it is signed integer or not.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n = 0)
	{
		_putchar(48);
		return (0);
	}
	else
		{
		_putchar(43);
		return (1);
	}
	 _putchar('\n');
}
