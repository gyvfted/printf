#include "main.h"
/**
* _puts - prints a string, followed by a new line
* @str:the string
* Return:size of string
*/
int _puts(char *str)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
