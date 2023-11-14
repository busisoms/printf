#include "main.h"

/**
 * print_char - handles the character conversion specifiers
 * @args: arguments passed
 *
 * Return: character
 */

int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	return (write(1, &ch, 1));
}

/**
 * print_str - prints string to stdout
 * @args: arguments passed
 *
 * Return: string
 */

int print_str(va_list args)
{
	const char *str;
	int len = 0;


	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

