#ifndef PRINTF
#define PRINTF

/* include default libraries */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define BUFFSIZE 1024

/**
 * struct convert - definesa struct for symbols and functions
 *
 * @sym: operator
 * @f: function associated with sum
 */

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} convert_t;

/**
 * struct modifier - modifier fields collection
 * @flags: flags field composed of [0, '',#,+,-]
 * @width: width field, positive number
 * @precision: precision field
 * @length: length field string composed [h, l]
 * @specifier: specifier characters
 * [c, s, %, d, i, b, u, o, x, X, S, p, r, R]
 *
 */

typedef struct modifier
{
	char *flags;
	int width;
	int precision;
	char *length;
	char specifier;
} modifier_t;

/* Main function */
int parser(const char *format, convert_f f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(__attribute__((unused))va_list);
int print_integer(va_list list);
int print_decimal(va_list list);
int rot_13(va_list list);
int print_octal(va_list list);
int print_unint(va_list list);
int print_binary(va_list list);
int binary_recursive(unsigned int num, int len);
int _hex_str(unsigned int n, int len);
int _hex_1(va_list list);
int _hex_u(va_list list);
int str(va_list list);
int rev_string(__attribute__((unused))va_list list, char *s, ...);
int print_r(va_list list);

#endif
