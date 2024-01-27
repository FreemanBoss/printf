#include <stdio.h>
#include "main.h"

/**
 * print_char - prints a character to the std-out
 * @arg: refers to list of arguments pointing to character
 */

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	return (c);
}
