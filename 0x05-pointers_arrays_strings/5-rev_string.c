#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string's char to check
 *
 * Description: This will reverse a string
 * Return: 0 always
 */
void rev_string(char *s)
{
	int a = 0, n, c;
	char m;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (n = 0; c >= 0 && n < c; c--, n++)
	{
		m = s[n];
		s[n] = s[c];
		s[c] = m;
	}
}
