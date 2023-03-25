#include "main.h"

/**
 * print_numbers - prints numbers followed with new line
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0,i < 10,i++)
		_putchar(i + '0');
	_putchar('\n');
}
