/*
** EPITECH PROJECT, 2017
** my_score_life
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_score(my_declas_sf my_sf)
{
	sfVector2f reset = vector (0, rand()%600);
	int k = 10;

	my_sf.score = my_sf.score + 1;
	my_printf("HIT ! Score : %i\n", my_sf.score);
	if (my_sf.score == k) {
		k = k + 10;
		my_sf.duck_vect_x = my_sf.duck_vect_x + 2;
		my_sf.level = my_sf.level + 1;
		my_sf.duck_speed = my_sf.duck_speed - 0.3;
	}
	my_sf.duck_pos_x = 0;
	my_sf.duck_pos_y = reset.y;
	sfSprite_setPosition(my_sf.sp_duck, reset);
	return (my_sf);
}

my_declas_sf my_life(my_declas_sf my_sf)
{
	my_sf.life = my_sf.life - 1;
	my_printf("MISS ! HP left : %i\n", my_sf.life);
	if (my_sf.life == 0) {
		my_printf("\n");
		my_display_end_game_screen(my_sf);
	}
	return (my_sf);
}
