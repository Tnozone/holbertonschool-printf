#include "main.h"

/**
 * _putchar - prints a char
 * @c: char to print
 * Return: write(1, c, 1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
