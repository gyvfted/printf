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
			switch (format[j])
			{
                		case 'c':
                		{
					char x = va_arg(args, int);
					_putchar(x);
					length++;
					break;
				}
				case 's':
				{
					char *x = va_arg(args, char*);
					write(1, x, _strlen(x) * sizeof(char));
					length += _strlen(x) - 1;
					break;
				}
				case 'i':
				{
					int x = va_arg(args, int);
					print_number(x);
					length++;
					break;
				}
				case 'd':
				{
					int x = va_arg(args, int);
					print_number(x);
					length++;
					break;
				}
				case '%':
				{
					_putchar('%');
					length++;
					break;
				}
				default:
				{
					_putchar('%');
					_putchar(format[j]);
					length += 2;
					break;
				}
			}
		}
		else
		{
			_putchar(format[j]);
			length++;
		}
		j++;
	}

	va_end(args);
	return length;
}

