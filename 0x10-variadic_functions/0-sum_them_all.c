#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all
 *  its parameters
 * @n: number of parameters
 * Return: the sum or 0 if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list ap;
	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
