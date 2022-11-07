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
	st = va_arg(ar, char *);
	for (i = 0; i < st; i++)
		if (st[i] == '%' && st[i + 1] == 'c' && st[i + 2] == ' ')
		{
			st[i] = "";
			st[i + 1] = write (1, format, n);
		}
		if (st[i] == '%' && st[i + 1] == 's' && st[i + 2] == ' ')
		{
			st[i] = ""; 
			st[i + 1] = write (1, *format, n);
		}
		if (st[i] == '%' && st[i + 1] == '%' && st[1 + 2] == ' ')
		{
			st[i] = ""; 
		}
	
	write(1, st, i);

	va_end(ar);
	return (i - 1);
}
