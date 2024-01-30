#include "main.h"

/**
 * _printf_binary - print stri               * @num: variable                            * @count: pointer                           * Return: int                               */                                         int _printf_binary(unsigned int num, int *count)                                        {                                                   int binary[64] = {0};
        int j, i = 0;                                                                           if (num == 0)                               {                                                   _putchar('0');                              (*count)++;                                 return (0);                         }                                           while (num > 0)
        {
                binary[i] = num & 1;
                num = num >> 1;
                i++;
        }
        for (j = i - 1; j >= 0; j--)
        {
                _printf("%d", binary[j]);
                (*count)++;
        }
        return (0);
}


