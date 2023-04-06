#include "main.h"

/**
 * factorial - returns the factorial of n
 * @n: the num
 * Return: factorial n
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
