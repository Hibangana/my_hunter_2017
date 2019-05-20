/*
** EPITECH PROJECT, 2017
** my_case_check
** File description:
** my_ls
*/

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int case_check(const char* format, va_list list,int i)
{
	switch (format[i]) {
	case 'd':
		my_put_nbr(va_arg(list,int));
		break;
	case 'c':
		my_putchar(va_arg(list,int));
		break;
	case 'C':
		case_cap_c(va_arg(list,int));
		break;
	default :
		case_check_one(format,list,i);
		break;
	}
	return (i);
}

int case_check_two(const char* format, va_list list, int i)
{
	switch (format[i]) {
	case '%':
		my_putchar('%');
		break;
	case 'X':
		put_hexa_cap(va_arg(list,unsigned int),16);
		break;
	case 'S':
		case_cap_s(va_arg(list,char*));
		break;
	case 'b':
		my_put_nbr_binary(va_arg(list,unsigned int));
		break;
	default :
		case_check_three(format,list,i);
		break;
	}
	return (i);
}

int case_check_one(const char* format, va_list list, int i)
{
	switch (format[i]) {
	case 'i':
		my_put_nbr(va_arg(list,int));
		break;
	case 'p':
		nullpointertest(va_arg(list,long));
		break;
	default :
		case_check_two(format,list,i);
		break;
	}
	return (i);
}

int case_check_three(const char* format, va_list list,int i)
{
	switch (format[i]) {
	case 's':
		my_putstr(va_arg(list,char*));
		break;
	case 'u':
		my_put_nbr_unsigned(va_arg(list,unsigned int));
		break;
	case 'x':
		put_hexa_or_oct(va_arg(list,unsigned int),16);
		break;
	case 'o':
		put_hexa_or_oct(va_arg(list,unsigned int),8);
		break;
	default :
		my_putchar('%');
		my_putchar(format[i]);
		break;
	}
	return (i);
}
