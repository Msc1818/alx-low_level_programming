#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check Main
 * main - Entry point
 * print_to_98:print nember from n to 98
 * print_to_98_Ch
 * @n: put integer from n to98
 * Description: print numbers from n to 98
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
