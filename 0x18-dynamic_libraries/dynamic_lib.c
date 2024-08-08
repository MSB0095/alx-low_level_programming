#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/* Function implementations */

/* Function to print a single character */
int _putchar(char c) {
	return write(1, &c, 1);
}

/* Function to check if a character is lowercase */
int _islower(int c) {
	return (c >= 'a' && c <= 'z');
}

/* Function to check if a character is alphabetic */
int _isalpha(int c) {
	return ((_islower(c) || (c >= 'A' && c <= 'Z')));
}

/* Function to get the absolute value of an integer */
int _abs(int n) {
	return (n < 0 ? -n : n);
}

/* Function to check if a character is uppercase */
int _isupper(int c) {
	return (c >= 'A' && c <= 'Z');
}

/* Function to check if a character is a digit */
int _isdigit(int c) {
	return (c >= '0' && c <= '9');
}

/* Function to find the length of a string */
int _strlen(char *s) {
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}
	return len;
}

/* Function to print a string */
void _puts(char *s) {
	while (*s) {
		_putchar(*s++);
	}
}

/* Function to copy a string */
char *_strcpy(char *dest, char *src) {
	char *ptr = dest;
	while ((*dest++ = *src++))
		;
	return ptr;
}

/* Function to convert a string to an integer */
int _atoi(char *s) {
	int result = 0;
	int sign = 1;

	if (*s == '-') {
		sign = -1;
		s++;
	}
	
	while (*s >= '0' && *s <= '9') {
		result = result * 10 + (*s - '0');
		s++;
	}

	return sign * result;
}

/* Function to concatenate two strings */
char *_strcat(char *dest, char *src) {
	char *ptr = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return ptr;
}

/* Function to concatenate n characters from src to dest */
char *_strncat(char *dest, char *src, int n) {
	char *ptr = dest;
	while (*dest)
		dest++;
	while (n-- && (*dest++ = *src++))
		;
	*dest = '\0';
	return ptr;
}

/* Function to copy n characters from src to dest */
char *_strncpy(char *dest, char *src, int n) {
	char *ptr = dest;
	while (n-- && (*dest++ = *src++))
		;
	while (n-- > 0)
		*dest++ = '\0';
	return ptr;
}

/* Function to compare two strings */
int _strcmp(char *s1, char *s2) {
	while (*s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/* Function to set memory to a specific value */
char *_memset(char *s, char b, unsigned int n) {
	char *ptr = s;
	while (n--)
		*s++ = b;
	return ptr;
}

/* Function to copy memory area */
char *_memcpy(char *dest, char *src, unsigned int n) {
	char *ptr = dest;
	while (n--)
		*dest++ = *src++;
	return ptr;
}

/* Function to find the first occurrence of a character in a string */
char *_strchr(char *s, char c) {
	while (*s) {
		if (*s == c)
			return s;
		s++;
	}
	return (c == '\0') ? s : NULL;
}

/* Function to get the length of the initial segment of s which consists only of bytes from accept */
unsigned int _strspn(char *s, char *accept) {
	unsigned int count = 0;
	while (*s && strchr(accept, *s++))
		count++;
	return count;
}

/* Function to find the first occurrence of any of the bytes in accept in s */
char *_strpbrk(char *s, char *accept) {
	while (*s) {
		if (strchr(accept, *s))
			return s;
		s++;
	}
	return NULL;
}

/* Function to locate a substring */
char *_strstr(char *haystack, char *needle) {
	char *h, *n;

	while (*haystack) {
		h = haystack;
		n = needle;

		while (*n && *h && (*n == *h)) {
			n++;
			h++;
		}
		
		if (!*n)
			return haystack;
		
		haystack++;
	}
	return NULL;
}
