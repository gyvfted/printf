#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: count of the characters printed
 */
int _printf(const char *format, ...)
{
	int j = 0;

	va_list args;
	va_start(args, format);

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
					write(1, &x, sizeof(char));
					break;
				}
				case 's':
				{
					char *x = va_arg(args, char*);
					write(1, x, strlen(x) * sizeof(char));
					break;
				}
				case 'i':
				{
					int x = va_arg(args, int);
					write(1, &x, sizeof(int));
					break;
				}
				case 'd':
				{
					int x = va_arg(args, int);
					write(1, &x, sizeof(int));
					break;
				}
				case '%':
				{
					write(1, "%", sizeof(char));
					break;
				}
				default:
				{
					write(1, &format[j], sizeof(char));
					break;
				}
			}
		}
		else
		{
			write(1, &format[j], 1);
		}
		j++;
	}

	va_end(args);
	return 0;
}

