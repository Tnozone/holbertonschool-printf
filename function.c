#include"mian.h"

/**
 * print_char - print character
 * @ar: argument
 * Return: 0
 */

int print_char(va_list ar)
{
	_putchar(va_arg(ar, int));
	return (1);
}

/**
 * print_str - prints a string
 * @ar: argument
 * Return: 0
 */

int print_str(va_list ar)
{
	int j;
	char *str = va_arg(ar, char *)

	if (str == NULL)
		str = "(null)";

	for (j = 0; str[j]; j++)
		;

	write(1, s, j);
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
