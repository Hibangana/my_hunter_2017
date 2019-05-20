/*
** EPITECH PROJECT, 2017
** my_printf_h
** File description:
** my_printf_h
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int testspacepresence(const char* format, int i);
void put_hexa_for_long(long nb, unsigned int b);
void put_hexa_or_oct(unsigned int nb, unsigned int b);
unsigned int my_put_nbr_unsigned(unsigned int nb);
int case_check(const char* format, va_list list, int i);
int case_check_one(const char* format, va_list list, int i);
int case_check_two(const char* format, va_list list, int i);
int case_check_three(const char* format, va_list list, int i);
void put_hexa_cap(unsigned int nb, unsigned int b);
void my_put_nbr_binary(unsigned int nb);
void nullpointertest(long nb);
int strnullcase(char const *str);
int my_putstr(char const *str);
int removespace(const char* format, int i);
long my_put_nbr(long nb);
void my_putchar(char c);
void case_cap_c(char str);
void case_cap_s(char *str);
int my_printf(const char* format,...);
#endif
