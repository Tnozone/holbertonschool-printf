#include"mian.h"

/**
 * print_char - print character
 * @ar: argument
 * Return: 0
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - prints a string
 * @ar: argument
 * Return: 0
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
 * @p: percent
 * Return: 0
 */

int print_pct(void)
{
	write(1, "%", 1);
	return (1);
}
