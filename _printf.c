#include "main.h"

/**                                          * _printf - function that produces output according to a format                         * @format: character string - composed of zero or more directives.                      * Return:  the number of characters printed without null
 */
int _printf(const char *format, ...)
{
        int i = 0, count = 0;                       va_list arg;

        va_start(arg, format);                      if (format == NULL)
                return (-1);
        for (i = 0; *(format + i) != '\0'; i
++)
        {                                                   if (*(format + i) == '%')
                {
                        if (format[i + 1] ==
 '\0')
                                return (-1);
                        count += _printf_helper(format, arg, &i);
                }                                           else                                        {
                        _putchar(*(format + i));                                                                count++;                            }                                   }                                           va_end(arg);                                return (count);                     }
