/*
** EPITECH PROJECT, 2017
** my_sprite_cutter
** File description:
** my_hunter
*/

#include "my.h"

int my_sprite_cutter(int value, int add, int max)
{
	value = value + add;
	if (value == max)
		value = 0;
	return (value);
}
