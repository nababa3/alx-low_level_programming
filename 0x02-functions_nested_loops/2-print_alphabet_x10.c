#include "main.h"
/**
 * print _alphabet_x10 - make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char j;
	int i = 0;
	
	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++'
		}
		_putchar('\n');

		i++;
	}
}
