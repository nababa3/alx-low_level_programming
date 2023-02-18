#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
in main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar (rev);
		rev--;
	}
	putchar ('\n');
	return (0);
}
