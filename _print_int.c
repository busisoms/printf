#include "main.h"

/**
 * speci_d - prints numbers
 * @num: interger to be printed
 * Return: number of characters printed
 */

int speci_d(int num)
{
	int temp;
	int count = 0;
	int i = 0;
	char *numbers;

	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		++count;
	}

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
		numbers = malloc(sizeof(char) * (count + 1));
		if (numbers == NULL)
		{
			return (-1);
		}

		i = 0;
		temp = num;

		while (temp > 0)
		{
			numbers[i++] = temp % 10 + '0';
			temp /= 10;
		}

		while ( --i >= 0)
		{
			_putchar(numbers[i]);
			count++;
		}
		free(numbers);
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
			break;
		default:
			break;

	}
	return (result);
}

