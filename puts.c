#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str:the string
 * Return:size of string
 */
int _puts(char *str)
{
	int size;

	if (str == NULL)
		str = "(null)";
	for (size = 0; str[size] != '\0'; size++)
		;
	write(1, str, size);
	return (size - 1);
}
