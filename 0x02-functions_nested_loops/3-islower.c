/**
 * _islower - Check Main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char x;
	int lw = 1;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != c)
			lw = 0;
	}

	return (lw);
}
