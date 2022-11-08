#include"main.h"

/**
 * _printf - printf function
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int n = 0;
	unsigned int i = 0;
	unsigned int r = 0;
	va_list ar;

	va_start(ar, format);

	if (format[0] == '%' || format[1] == '\0' || format == NULL)
		return (0);

	while (format[n] != '\0')
	{
		if (format[n] == '%')
		{
			i = 0;
			while (get_function[i].prin != NULL)
			{
				if (format[n + 1] == get_function[i].prin[0])
				{
					r = r + get_function[i].g(ar);
			
				}
			i++;
			}
		}
		n++;
	}

	va_end(ar);
	return (r);
}
