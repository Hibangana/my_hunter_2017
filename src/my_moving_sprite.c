/*
** EPITECH PROJECT, 2017
** my_moving_sprite
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_moving_sprite(my_declas_sf my_sf, sfVector2f duck)
{
	sfVector2f move;

	sfSprite_move(my_sf.sp_duck, duck);
	my_sf.duck_pos_x = my_sf.duck_pos_x + 10;
	if (my_sf.duck_pos_x > 1280) {
		my_sf = my_life(my_sf);
		my_sf.duck_pos_y = rand() % 1000;
		if (my_sf.duck_pos_y < 100)
			my_sf.duck_pos_y = my_sf.duck_pos_y + 500;
		if (my_sf.duck_pos_y > 490)
			my_sf.duck_pos_y = my_sf.duck_pos_y - 500;
		move = vector (0, my_sf.duck_pos_y);
		my_sf.duck_pos_y = move.y;
		sfSprite_setPosition(my_sf.sp_duck, move);
		my_sf.duck_pos_x = 0;
	}
	return (my_sf);
}
