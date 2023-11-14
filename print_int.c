#include "main.h"

/**
 * print_num - prints numbers
 * @num: integer to be printed
 * Return: number of characters printed
 */
int print_num(int num)
{
	int count = 0;
	int temp;

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
		int rev_num = 0;

		while (num > 0)
		{
			temp = num % 10;
			rev_num = rev_num * 10 + temp;
			num /= 10;
		}

		while (rev_num > 0)
		{
			temp = rev_num % 10;
			_putchar(temp + '0');
			rev_num /= 10;
			count++;
		}
	}

	return (count);
}



/**
 * print_int - handles integer conversion specifiers
 * @args: arguments passed
 *
 *Return: number of characters printed
 */

int print_int(va_list args)
{
	int num, result;

	num = va_arg(args, int);
	result = print_num(num);
	return (result);
}

