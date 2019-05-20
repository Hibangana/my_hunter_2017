/*
** EPITECH PROJECT, 2017
** my_cap_s
** File description:
** my_ls
*/

#include <string.h>
#include "my.h"

void lessthanten(char *str,int i)
{
	int a = 0;

	if (str[i] < 8) {
		my_putchar(92);
		my_putstr("00");
		a = (str[i]);
		put_hexa_or_oct(a,8);
	}
}

void lessthanhundred(char *str,int i)
{
	int a = 0;

	if (str[i] > 8 && str[i] < 64) {
		my_putchar(92);
		my_putstr("0");
		a = (str[i]);
		put_hexa_or_oct(a,8);
	}
}

void morethanhundred(char *str, int i)
{
	int a = 0;

	if (str[i] > 64) {
		my_putchar(92);
		a = (str[i]);
		put_hexa_or_oct(a,8);
	}
}

void case_cap_s(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 1) {
		if (str[i] < 32 || str[i] > 126) {
			lessthanten(str,i);
			lessthanhundred(str,i);
			morethanhundred(str,i);
		}
		else
			my_putchar(str[i]);
	}
}
