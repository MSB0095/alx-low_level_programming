#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int j = 0, i = 0;
	char *concat = malloc(sizeof(s1) + n - 1);

	while(s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while(s2[j] != '\0' && j <= n)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';

	if (concat != NULL)
	{
		return (concat);
	}
	else if (concat == NULL)
	{
		return (NULL);
	}
}


int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

