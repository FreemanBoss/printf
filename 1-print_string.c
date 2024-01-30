#include "main.h"

/**                                          * _printf_string - print string             * @tmp: pointer                             * Return: int                               */                                         int _printf_string(char *tmp)               {                                                   int res = 0, i;                             char *null = "(null)";
                                                    if (tmp == NULL)                            {                                                   for (i = 0; *(null + i) != '\0'; i++)                                                   {                                                   _putchar(*(null + i));                                                                  res++;
                }                                   }
        else
        {
                for (i = 0; tmp[i] != '\0'; i++)
                {
                        _putchar(tmp[i]);
                        res++;
                }
        }
        return (res);
}
