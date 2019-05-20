/*
** EPITECH PROJECT, 2017
** my_set_options
** File description:
** my_hunter
*/

#include "my.h"

sfColor my_set_color(int red, int green, int blue, int alpha)
{
	sfColor color;

	color.r = red;
	color.g = green;
	color.b = blue;
	color.a = alpha;
	return (color);
}

my_declas_sf my_text_settings(my_declas_sf my_sf)
{
	my_sf.police = sfFont_createFromFile("my_p/font.ttf");
	my_sf.text_lvl = sfText_create();
	my_sf.text_score = sfText_create();
	my_sf.highscore = sfText_create();
	my_sf.text_hp = sfText_create();
	sfText_setFont(my_sf.text_lvl, my_sf.police);
	sfText_setFont(my_sf.text_score, my_sf.police);
	sfText_setFont(my_sf.highscore, my_sf.police);
	sfText_setFont(my_sf.text_hp, my_sf.police);
	my_sf = my_text_creator(my_sf);
	return (my_sf);
}


my_declas_sf my_set_options(my_declas_sf my_sf, sfVideoMode mode)
{
	my_sf.duck_pos_x = 10;
	my_sf.duck_speed = 1.5;
	my_sf.level = 1;
	my_sf.score = 0;
	my_sf.life = 3;
	my_sf.duck_vect_x = 10;
	my_sf.duck_vect_y = 0;
	my_sf.random = rand();
	my_sf.clock = sfClock_create();
	my_sf.window = sfRenderWindow_create
		(mode, "hunter", sfResize | sfClose, NULL);
	sfRenderWindow_setMouseCursorVisible(my_sf.window, 0);
	my_sf = my_texture_creator(my_sf);
	my_sf = my_sprite_creator(my_sf);
	my_sf = my_link_creator(my_sf);
	sfRenderWindow_setFramerateLimit(my_sf.window, 60);
	my_sf = my_text_settings(my_sf);
	return (my_sf);
}
