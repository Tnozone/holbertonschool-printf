#include "main.h"

/**
 * get_func - function to get the correct printing format
 * @format: string pointer
 * Return: p[i].f or NULL
 */
int (*get_func(const char *format))(va_list)
{
	int i;
	func_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};

	for (i = 0; p[i].t; i++)
	{
		if (*format == *(p[i].t)
			return (p[i].f);
	}
	return (NULL);
}
