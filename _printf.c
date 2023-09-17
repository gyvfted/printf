#include "main.h"
/**
 * switch_printf - treat different params
 * @p: the param
 * @args: the vardic array
 * @length: length of string
 */

void switch_printf(char p, int *length, va_list args)
{
	switch (p)
	{
		case 'c':
		{
			_putchar(va_arg(args, int));
			*length += 1;
			break;
		}
		case 's':
		{
			char *x = va_arg(args, char*);

			*length += _puts(x);
			break;
		}
		case 'i':
		{
			print_number(va_arg(args, int), length);
			break;
		}
		case 'd':
		{
			print_number(va_arg(args, int), length);
			break;
		}
		case '%':
		{
			_putchar('%');
			*length += 1;
			break;
		}
		default:
		{
		_putchar('%');
		_putchar(p);
		*length += 2;
		break;
		}
	}
}
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: count of the characters printed
 */
int _printf(const char *format, ...)
{
	int j = 0, length = 0;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);

	while (format[j])
	{
		if (format[j] == '%')
		{
		j++;
		switch_printf(format[j], &length, args);
		}
		else
		{
			_putchar(format[j]);
			length++;
		}
		j++;
	}
	va_end(args);
	return (length);
}

