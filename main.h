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

typedef struct prin
{
	char *prin;
	void (*g)(va_list ar);
} fun_t;

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list ar);
void print_str(va_list ar);
void print_pct(void);

#endif
