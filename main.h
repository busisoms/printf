#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct format - struct for selecting format specifiers
 * @f: pointer to helper functions
 * @specifier: character to pick functions
 *
 */

typedef int (*format_func)(va_list);

struct format
{
	char specifier;
	format_func f;
};

typedef struct format format_t

int _printf(const char *format, ...);
int is_valid(char a);
int print_percent(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int _putchar(char c);
#endif
