#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s:the string
 * Return: length of string.
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s[size] != '\0')
		size++;
	return (size);
}
