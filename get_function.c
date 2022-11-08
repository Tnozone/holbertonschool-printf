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

	int i = 0;

	while (p[i].func_type != NULL)
	{
		if (*p[i].func_type == *format)
			return (p[i].t);
		i++;
	}
	return (NULL);
}
