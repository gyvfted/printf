#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s:the string
 * Return: length of string.
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
