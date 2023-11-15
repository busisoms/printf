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
	int count = 0, i = 0;
	unsigned long int j;
	format_t types[] = {{'c', print_char}, {'s', print_str},
	{'d', print_int}, {'i', print_int}, {'%', print_percent}, {'b', print_binary}};

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0' && is_valid(format[i + 1]))
			{
				j = 0;
				while (j < (sizeof(types) / sizeof(types[0])))
				{
					if (format[i + 1] == types[j].specifier)
					{
						count += types[j].f(args);
						i++;
						break;
					}
					j++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

