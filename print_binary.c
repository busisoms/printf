#include "main.h"

/**
 * print_binary - prints binary of unsigned int
 * @args: arguments passed
 *
 * Return: number of characters printed
 */

int print_binary(va_list args)
{
	unsigned int num, limit, i, sum = 0;
	unsigned int a[LEN];
	int count = 0;

	num = va_arg(args, unsigned int);
	limit = MAX;
	a[0] = num / limit;
	for (i = 1; i < LEN; i++)
	{
		a[i] = (num / limit) % 2;
		limit /= 2;
	}
	for (i = 0; i < LEN; i++)
	{
		sum += a[i];
		if (sum || i == LEN)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

