#include "main.h"
/**
* puts_half - Prints half of a string
*@str: string to print
*Return: 0 (success)
*/
void puts_half(char *str)
{
	int i, j, l;

	j = 0;
	while (*(str + j) != '\0')
		j++;
	l = j;
	j = j / 2;
	if (l % 2 != 0)
	{
		j++;
	}
	for (i = 0; i < l; i++)
	{
		if (i >= j)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
