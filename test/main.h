#ifndef _MAIN_H_
#define _MAIN_H_
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 * struct prin - structure
 *
 * @prin: the specifier
 * @g: associated funtion
 */

typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_function(const char *format))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(void);

#endif
