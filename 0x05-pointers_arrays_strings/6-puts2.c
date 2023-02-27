#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 *
 */
void puts2(char *str)
{
	int m;
	int n;

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		;
	}
	for (n = 0 ; n < m ; n = n + 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
