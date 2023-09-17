#include "main.h"

/**
 * print_number - prints number using putchar
 * @n:the number to be printed
 */
void print_number(int n, int *j)
{
	unsigned int rec;

	rec = n;
	if (n < 0)
	{
		_putchar(45);
		rec = -rec;
		*j = *j + 1;
	}
	if (rec / 10)
		print_number(rec / 10, j);
	_putchar('0' + rec % 10);
	*j = *j + 1;
}
