#include "main.h"
/**
 * _putchar - the classical _putchar
 * @c: character to print
 * Return: 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
