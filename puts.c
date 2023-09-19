#include "main.h"
/**
* _puts - prints a string, followed by a new line
* @str:the string
* Return:size of string
*/
int _puts(char *str)
{
	int length;

	if (!str)
		str = "(null)";

	for (length = 0; str[length] != '\0'; length++)
		_putchar(str[length]);

	return (length);
}
