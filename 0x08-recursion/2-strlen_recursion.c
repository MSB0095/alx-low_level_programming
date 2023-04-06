#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string
 * Return: the lenght of s
*/

int _strlen_recursion(char *s)
{
	unsigned int i =0;

	if (*s != '\0')
	{
		++ i;
		return (_strlen_recursion(s + 1));
	}
	else
	{
		return(i);
	}
}