#include "main.h"

/**
 * _to_binary - Convert an unsigned int to binary
 * @n: The unsigned int to convert
 *
 * Return: The number of characters printed
 */
int _to_binary(unsigned int n)
{
	int count = 0;
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		count++;
		mask >>= 1;
	}
	return (count);
}

/**
 * custom_printf - Custom printf function
 * @format: The format string
 * @...: Additional arguments
 *
 * Return: The number of characters printed
 */
int custom_printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'b')
			{
				unsigned int n = va_arg(args, unsigned int);

				count += _to_binary(n);
			}
			else
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
