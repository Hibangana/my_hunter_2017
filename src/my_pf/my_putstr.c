/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** my_ls
*/

#include <unistd.h>
#include "my.h"

int strnullcase(char const *str)
{
	if (str != NULL)
		return (1);
	return (0);
}

int my_putstr(char const *str)
{
	int a = 0;
	if (strnullcase(str) == 0) {
		my_putstr("(null)");
		return (0);
	}
	else
		while (str[a] != '\0') {
			my_putchar(str[a]);
			a = a + 1;
		}
	return (0);
}
