#include "main.h"

/**
 * is_valid - checks if the char after % is a valid specifier
 * @a: specifier
 *
 * Return: 1 if valid, 0 otherwise
 */

int is_valid(char a)
{
	char specifiers[] = {'c', 's', 'i', 'd', '%', 'b'};
	unsigned long int i;

	for (i = 0; i < (sizeof(specifiers) / sizeof(specifiers[0])); i++)
	{
		if (a == specifiers[i])
		{
			return (1);
		}
	}

	return (0);
}

