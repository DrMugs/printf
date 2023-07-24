#include "main.h"
#include <stdarg.h>

/**
 * _printf -  prints whatever you want
 * @format : text to be checked
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, n = 0;
	char *str;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
						_putchar(va_arg(args, int));
						i++;
						break;
					case 's':
						str = va_arg(args, char *);
						n += print_string(str);
						i++;
						break;
					case '%':
						_putchar('%');
						_putchar(format[i + 2]);
						i++;
						break;
					case 'b':
						to_binary(va_arg(args, int));
						i++;
						break;
					default:
						_putchar(format[i]);
						i++;
						continue;
				}
			}
			if (format[i - 1] != '%')
				_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (n + i);
}

