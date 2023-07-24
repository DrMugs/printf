#include "main.h"

/**
 * print_string - prints strings
 * @str : string to be printed
 * Return: number of characters
 */

int print_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
