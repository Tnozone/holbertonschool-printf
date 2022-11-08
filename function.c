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

	write(1, c, 1);
}

/**
 * print_str - prints a string
 * @ar: argument
 * Return: 0
 */

void print_str(va_list ar)
{
	int len = 0;
	char *s;
	s = va_arg(ar, char *)

	for (int x = 0; s[x]; x++)
		len++;

	write(1, s, len);
}

/**
 * print_pct - prints a percentage
 * @p: percent
 * Return: 0
 */

void print_pct(void)
{
	write(1, "%", 1);
}
