#include "main.h"

/**
 * checkprime - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int checkprime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (checkprime(a + 1, b));
}

/**
 * is_prime_number - a function that returns 1 if the 
 * input integer is a prime number, otherwise return 0
 * Return: 1 if prime number, 0 if not
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checkprime(2, n));
}
