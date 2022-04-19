#include "main.h"

/**
 * print_char - prints character
 * @list:list of parameters
 * Return: number of characters printed
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
