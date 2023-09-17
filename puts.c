#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str:the string
 * Return:size of string
 */
int _puts(char *str)
{
	int size;

	for (size = 0; *str++; size++)
	{
		_putchar(*(str - 1));
	}
	return (size);
}
