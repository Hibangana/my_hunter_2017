/*
** EPITECH PROJECT, 2017
** my_remove_space
** File description:
** my_ls
*/

#include <string.h>
#include "my.h"

int removespace(const char* format,int i)
{
	while(format[i] == ' ')
		i = i + 1;
	return (i);
}
