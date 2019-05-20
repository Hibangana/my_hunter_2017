/*
** EPITECH PROJECT, 2017
** my_int_rect_settings
** File description:
** my_hunter
*/

#include "my.h"

sfIntRect my_int_rect_settings(int top, int left, int width, int height)
{
	sfIntRect name;

	name.top = top;
	name.left = left;
	name.width = width;
	name.height = height;
	return (name);
}
