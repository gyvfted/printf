#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: count of the characters printed
 */
int _printf(const char *format, ...)
{
	int j = 0,length = 0;

	va_list args;
	va_start(args, format);
	if (!format)
		return -1;

	while (format[j])
	{
		if (format[j] == '%')
		{
		j++;
		length++;
			switch (format[j])
			{
                		case 'c':
                		{
					char x = va_arg(args, int);
					_putchar(x);
					break;
				}
				case 's':
				{
					char *x = va_arg(args, char*);
					write(1, x, _strlen(x) * sizeof(char));
					break;
				}
				case 'i':
				{
					int x = va_arg(args, int);
					print_number(x);
					break;
				}
				case 'd':
				{
					int x = va_arg(args, int);
					print_number(x);
					break;
				}
				case '%':
				{
					_putchar('%');
					break;
				}
				default:
				{
					_putchar('%');
					_putchar(format[j]);
					break;
				}
			}
		}
		else
		{
			write(1, &format[j], 1);
			length++;
		}
		j++;
	}

	va_end(args);
	return length;
}

