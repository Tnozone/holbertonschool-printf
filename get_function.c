#include"main.h"

/**
 * get_function - function to get the correct printing format
 *
 * @f: function pointer
 * Return: NULL or fun[i].g
 */

int (*get_function(char *f))(int, int)
{
	fun_t fun[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_pct},
		{NULL, NULL}
		};

	int i = 0;

	while (fun[i].prin != NULL)
	{
		if (*fun[i].prin == *f)
			return (fun[i].g);
		i++;
	}
	return (NULL);
}
