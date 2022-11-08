#include "main.h"

/**
 * print_char - prints char
 * @args: arguments
 * Return: 1
 */

int print_char(va_list args)
{

	_putchar(va_arg(args, int));
	return (1);
}


/**
 * print_str - sprints string
 * @args: arguments
 * Return: j
 */

int print_str(va_list args)
{

	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
  return (j);
}

/**
 * print_pct
 * @args: arguments
 * Return: write(1, "%", 1)
 */

int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
