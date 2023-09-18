#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str:the string
 * Return:size of string
 */
int _puts(char *str)
{
	int size = 0;

	if (str == NULL)
		str = "(null)";
	while (str[size] != '\0')
		size++;
	return (write(1, str, size));
}
