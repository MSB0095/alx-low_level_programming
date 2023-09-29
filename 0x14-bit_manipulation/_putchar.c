#include <unistd.h>

/**
 * _putchar - the classical putchar
 * @c: the char to print
*/

void _putchar(unsigned long int c)
{
	write(1, &c, 1);
}
