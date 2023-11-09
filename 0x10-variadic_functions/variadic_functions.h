#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct token - struct token
 *
 * @token: the token
 * @f: function
*/

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

void print_char(char *separator, va_list ap);
void print_int(char *separator, va_list ap);
void print_float(char *separator, va_list ap);
void print_string(char *separator, va_list ap);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
