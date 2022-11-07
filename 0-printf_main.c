#include"main.h"

/**
 * _printf - printf function
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int n, i;
	va_list ar;

	va_start(ar, format);

	if (format == NULL)
		return (0);

	for (n = 0; n < format; n++)
		if (format[1] == '\0')
		{
			_putchar(format[0]);
			return (1)
		}

	for (i = 0; i < va_arg(ar, char *); i++)
		if (i == '%' && (i + 1) == 'c')
			va_arg[i + 1] = write (1, format, n);
		if (i == '%' && (i + 1) == 's')
			va_arg[i + 1] = write (1, *format, n);

	
	write(1, va_arg(ar, char *), i);

	va_end(ar);
	return (n - 1);
}
