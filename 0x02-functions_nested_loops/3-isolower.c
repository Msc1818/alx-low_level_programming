#include "main.h"

/**
* int_isolower  - return 1 if c is lowercas
* third task print _putchar
* Return 0 if otherwise
*/
	int _islower(int c)
{
	char c = 'a';
	int  f = 0;

	for (c = 'a'; f <= 'z'; c++);
	{
		if ( c == c )
		f = 1;
		else
		f = 0;
	}
	return (f);
}
