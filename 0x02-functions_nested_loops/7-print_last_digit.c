#include "main.h"
/**
 * print_last_digit - Cn
 * @r: An integer
 * this pr  prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int n;

	if (r >= 0)
		n = r *10;
	else
		n = -1 * (r%10);
	_putchar((n % 10) + '0');
	return (n % 10);
}
