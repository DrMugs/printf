#include "main.h"
#include <unistd.h>

/**
 * print_str - prints strings
 * @str : string to be printed
 * Return: number of characters
 */

int print_str(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * to_binary - priint binary
 * @n : integer to be converted to binary notatopn
 * Return: number of figures for the binary number
 */
int to_binary(unsigned int n)
{
	int arr[50];
	int i = 0, j = 0;

	arr[0] = 1;

	if (n == 1)
	{
		write(1 , &n, sizeof(int));
		return (n);
	}

	while (n / 2 != 0)
	{
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}
	j = i - 1;

	while (j >= 0)
	{
		write(1 , &arr[j], sizeof(int));
		j--;
	}
	return (i);
}
