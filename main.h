#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
void _print_char(char specifier, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int _print_int(char specifier, va_list args);
#endif
