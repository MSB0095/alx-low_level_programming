#include "main.h"

/**
 * checksqrt - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int checksqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: the number
 * Return: sqrt(n)
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
