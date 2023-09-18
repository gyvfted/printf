#include "main.h"
/**
* _puts - prints a string, followed by a new line
* @str:the string
* Return:size of string
*/
int _puts(char *str)
{
	int size, i, length = 0;

	size = _strlen(str);
	if (str == NULL)
		str = "(null)";

	for (i = 0; i < size; i++)
		length += _putchar(str[i]);

	return (length);
}
