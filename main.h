#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _rec_number(int num, int *count);
int _printf_string(char *tmp);
int _printf_binary(unsigned int num, int *count);
int _printf_helper(const char *format, va_list arg, int *i);

#endif
