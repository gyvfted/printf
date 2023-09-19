#include "main.h"
/**
* _printf - Receives the main string and all the necessary parameters to
* print a formated string
* @format: A string containing all the desired characters
* Return: count of the characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				char_count++;
			}
			else if (*format == 's') 
			{
				char *str = va_arg(args, char *);
				int len = 0;

				while (str[len])
				{
					len++;
				}
				write(1, str, len);
				char_count += len - 1;
				}
				else if (*format == '%')
				{
					write(1, "%", 1);
					char_count++;
				}
			}
		else
		{
			write(1, format, 1);
			char_count++;
		}
		format++;
	}

	va_end(args);
	return (char_count);
}
