#include "main.h"
/**
* _puts - prints a string, followed by a new line
* @str:the string
* Return:size of string
*/
int _puts(char *str)
{
	int i, length = 0;

	if (str == NULL)
		str = "(null)";

	for (i = 0; *str++; i++)
		length += _putchar(str[i]);

	return (length);
}
