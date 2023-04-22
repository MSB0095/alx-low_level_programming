#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the separator to use
 * @n: number of parameters
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(va, char *) == NULL)
		{
			printf("(nil)");
			break;
		}

		if (!separator)
			printf("%s", va_arg(va, char *));
		else if (separator && i == 0)
			printf("%s", va_arg(va, char *));
		else
			printf("%s%s", separator, va_arg(va, char *));
	}
	va_end(va);
	printf("\n");
}
