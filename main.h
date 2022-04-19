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

