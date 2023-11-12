#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 *
 * Return: he number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, state = 0, i = 0;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (state == 0)
		{
			if (format[i] == '%')
			{
				state = 1;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else if (state == 1)
		{
			if (format[i] == 'c' || format[i] == 's')
			{
				_print_char(format[i], args);
				state = 0;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count += _print_int(format[i], args);
				state = 0;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}


