/*
** EPITECH PROJECT, 2017
** my_hit_box_check
** File description:
** my_hunter
*/

#include "my.h"

int my_hit_box_check(my_declas_sf my_sf, sfEvent event)
{
	my_sf.click_x = event.mouseButton.x;
	my_sf.click_y = event.mouseButton.y;
	if ((my_sf.click_x >= my_sf.duck_pos_x &&
	     my_sf.click_x <= my_sf.duck_pos_x + 110) &&
	    (my_sf.click_y >= my_sf.duck_pos_y &&
	     my_sf.click_y <= my_sf.duck_pos_y + 110))
		return (1);
	return (0);
}
