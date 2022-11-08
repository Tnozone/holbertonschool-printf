#include"main.h"

/**
 * get_function - function to get the correct printing format
 *
 * @f: function pointer
 * Return: NULL or fun[i].g
 */

int (*get_function(const char *format))(va_list)
{
	fun_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{NULL, NULL}
		};

	int i;

	for (i = 0; p[i].t; i++)
	{
		if ((*p[i].t) == *format)
			return (p[i].f);
	}
	return (NULL);
}
