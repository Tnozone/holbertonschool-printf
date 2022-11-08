#include"main.h"

/**
 * print_char - print character
 * @args: argument
 * Return: 1
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - prints a string
 * @args: argument
 * Return: j
 */

int print_str(va_list args)
{
	int j;
	char *str = va_arg(args, char *)

	if (str == NULL)
		str = "(null)";

	for (j = 0; str[j]; j++)
		;

	write(1, str, j);
	return (j);
}

/**
 * print_pct - prints a percentage
 * @args: argument
 * Return: 1
 */

int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
