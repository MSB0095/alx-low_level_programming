#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 9)
		{
			putchar(48 + n);
			break;
		}
		putchar(48 + n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}


