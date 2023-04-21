#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the separator to use
 * @n: number of parameters
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(va, int));
		else if (separator && i == 0)
			printf("%d", va_arg(va, int));
		else
			printf("%s%d", separator, va_arg(va, int));
	}
	va_end(va);
	printf("\n");
}
