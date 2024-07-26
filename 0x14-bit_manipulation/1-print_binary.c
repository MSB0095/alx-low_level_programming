#include "main.h"

/**
 * print_binary - prints a binary
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	mask = 1UL << (sizeof(n) * 8 - 1);
	flag = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		while (mask > 0)
		{
			if (n & mask)
			{
				flag = 1;
				_putchar('1');
			}
			else if (flag == 1)
				_putchar('0');
			mask = mask >> 1;
		}
	}
}
