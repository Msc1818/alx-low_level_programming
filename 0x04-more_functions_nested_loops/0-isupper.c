#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the character to print
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
