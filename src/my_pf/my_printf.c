/*
** EPITECH PROJECT, 2017
** my_printer
** File description:
** my_ls
*/

#include <stdarg.h>
#include "my.h"

int modulo_last_check(const char *format, int i)
{
	if (format[i] == '%' && format[i + 1] == '\0')
		return (0);
	else
		return (i + 1);
}

int my_printf(const char* format,...)
{
	va_list list;
	va_start(list,format);
	int i = 0;

	while (format[i] != '\0') {
		if (format[i] == '%') {
			i = modulo_last_check(format,i);
			if (i == 0)
				return (1);
			if (testspacepresence(format,i) == 1)
				i = removespace(format,i);
			case_check(format,list,i);
		}
		else
			my_putchar(format[i]);
		i = i + 1;
	}
	va_end(list);
	return (1);
}
