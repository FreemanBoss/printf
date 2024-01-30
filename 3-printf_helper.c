#include "main.h"

/**
 * _printf_helper - function that produces output according to a format
 * @format: character string - composed of zero or more directives.
 * @arg: character string - composed of zero or more directives.
 * @i: character string - composed of zero or more directives.
 * Return:  the number of characters printed without null
 */
int _printf_helper(const char *format, va_list arg, int *i)
{
	int res = 0, num;
	char *tmp;

	switch (*(format + *i + 1))
	{
	case 's':
		tmp = va_arg(arg, char *);
		res += _printf_string(tmp);
		break;
	case 'c':
		_putchar(va_arg(arg, int));
		res++;
		break;
	case '%':
		_putchar(format[*i]);
		res++;
		break;
	case 'i':
	case 'd':
		num = va_arg(arg, int);
		_rec_number(num, &res);
		break;
	case 'b':
		num = va_arg(arg, int);
		_printf_binary(num, &res);
		break;
	default:
		_putchar(format[*i]);
		res++;
		*i -= 1;
		break;
	}
	*i += 1;
	return (res);
}
