#include "main.h"

/**
 * speci_d - prints numbers
 * @num: integer to be printed
 * Return: number of characters printed
 */
int speci_d(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			_putchar(num % 10 + '0');
			num /= 10;
			count++;
		}
	}

	return (count);
}


/**
 * _print_int - handles integer conversion specifiers
 * @specifier: specifier to work with
 * @args: arguments passed
 *
 *Return: number of characters printed
 */

int _print_int(char specifier, va_list args)
{
	int num, result;

	switch (specifier)
	{
		case 'd':
			num = va_arg(args, int);
			result = speci_d(num);
			break;

		case 'i':
			num = va_arg(args, int);
			result = speci_d(num);
			break;
		default:
			break;

	}
	return (result);
}

