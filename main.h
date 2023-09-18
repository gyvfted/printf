#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void print_number(int n, int *j);
int _putchar(char c);
int _puts(char *str);
int _strlen(char *s);

#endif
