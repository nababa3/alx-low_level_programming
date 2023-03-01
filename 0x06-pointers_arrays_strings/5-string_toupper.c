#include "main.h"
/**
 * string_toupper - upper a lower
 * @s: character to make upper
 * Return: return a value of upper
 */
char *strint_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
            if (s[i] >= 'a' && s[i] <= 'z')
                    s[i] = s[i] - 32;
            
    return (s);
}
