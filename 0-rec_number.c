#include "main.h"

/**
 * _rec_number - recursive number            * @num: variable                            * @count: pointer                           * Return: int
 */
int _rec_number(int num, int *count)
{
        if (num == -2147483648)                     {
                _putchar('-');
                _putchar('2');
                *count += 2;                                _rec_number(147483648, count);                                                          return (0);                         }                                           else if (num < 0)                           {                                                   _putchar('-');
                *count += 1;                                num *= (-1);
        }                                           if (num >= 10)
        {                                                   _rec_number(num / 10, count)
;
                _putchar((num % 10) + '0');                 *count += 1;                        }                                           else if (num < 10)
        {
                _putchar(num + '0');
                *count += 1;                        }
        return (0);                         }
