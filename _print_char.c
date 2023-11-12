#include "main.h"

/**
 * _print_char - handles the character conversion specifiers
 * @specifiers: specifer to work with
 * @args: arguments passed
 */

void _print_char(char specifier, va_list args)
{
	char ch;
	const char *str;

	switch (specifier)
	{
		case 'c':
			ch = va_arg(args, int);
			_putchar(ch);
			break;
		case 's':
			str = va_arg(args, char *);
			while(*str)
			{
				_putchar(*str++);
			}
			break;
		default:
			break;
	}
}

