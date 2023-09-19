#include "main.h"

/**
 * print_binary - Custom function to convert an unsigned integer to binary.
 * @num: The unsigned integer to be converted and printed.
 */
void print_binary(unsigned int num)
{
	if (num == 0)
	{
		putchar('0');
		return;
	}

	int binary[32]; // Assuming 32-bit integers
	int index = 0;

	while (num > 0)
	{
		binary[index++] = num % 2;
		num /= 2;
	}

	// Print binary representation in reverse order
	for (int i = index - 1; i >= 0; i--)
	{
		putchar(binary[i] + '0');
	}
}

/**
 * custom_printf - Custom printf-like function with %b specifier.
 * @format: The format string with custom specifiers.
 * @...: Variable number of arguments to match format specifiers.
 */
void custom_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	while ((c = *format))
	{
		if (c != '%')
		{
			putchar(c);
		}
		else
		{
			format++; // Move past '%'
			if (*format == 'b')
			{
				unsigned int num = va_arg(args, unsigned int);
				print_binary(num);
			}
			else
			{
				putchar('%'); // Handle other % cases
			}
		}
		format++;
	}

	va_end(args);
}
