#include "main.h"
/**
*print_alphabet-prints the alphabet,in lowercase+\n
*
*Return: no return value
*/
	void print_alphabet(void)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
