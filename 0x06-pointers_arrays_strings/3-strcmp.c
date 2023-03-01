#include "main.h"
/**
 * _strcmp - string to compare
 * @s1: destination to copy
 * @s2: source of copy
 * 
 * Return: value of string
 */
char *_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
    {
     	i++;   
	}
	return (s1[i] - s2[i]);
}
