#include <stdio>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
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
