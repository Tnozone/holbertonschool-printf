#include"mian.h"

/**
 * print_char - print character
 * @ar: argument
 * Return: 0
 */

void print_char(va_list ar)
{
	char c;
	c = va_arg(ar, int);

	_putchar(c);
}

/**
 * print_str - prints a string
 * @ar: argument
 * Return: 0
 */

void print_str(va_list ar)
{
	char *s;
	s = va_arg(ar, char *)

	while (*s != '\0')
		_putchar(s);
}

/**
 * print_pct - prints a percentage
 * @p: percent
 * Return: 0
 */

void print_pct(void)
{
	_putchar('%');
}
