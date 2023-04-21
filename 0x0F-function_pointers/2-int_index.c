#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function that checks the integer
 * Return: -1 if size <= O or no int found , else the int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
