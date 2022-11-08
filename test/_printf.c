#include"main.h"

/**
 * _printf - printf function
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	fun_t fun[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{NULL, NULL}
		};
	
	unsigned int n = 0;

	va_list args;

	va_start(ar, format);

	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (0);

	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] != '%')
		{
			write(1, format, 1);
			continue;
		}
		else
		{
			if (format[n + 1] == fun[i].prin[0])
			{
				fun[i].g(ar);
			}
			i++;
		}
	}

	va_end(ar);
	return (length);
}

int length(*format)
{
	int i, len;

	for (i = 0; format[i] != '\0'; i++)
	{
		len++;
		if (format[i] == %)
		{
			len -= 2;
			len += ();
		}
	}
}
