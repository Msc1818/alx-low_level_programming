#include "main.h"

/**
	* print_alphabet_x10 - print alphabet inlowercas x10
	* first task print _putchar
	* Return always (0) (success)
*/
	void print_alphabet_x10(void)
{
	char c = 'a';
	int f;

	for (f = 0; f < 10; f++)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
}
