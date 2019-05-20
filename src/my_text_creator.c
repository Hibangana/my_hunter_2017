/*
** EPITECH PROJECT, 2017
** my_text_creator
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_text_creator(my_declas_sf my_sf)
{
	sfVector2f text_pos = vector(450, 652);
	sfVector2f score_pos = vector(110, -4);
	sfVector2f my_hp_pos = vector (1160, 650);
	sfColor my_color = my_set_color(0, 100, 255, 255);
	sfVector2f highscore_pos = vector (800, 440);

	sfText_setCharacterSize(my_sf.text_lvl, 50);
	sfText_setCharacterSize(my_sf.text_score, 50);
	sfText_setCharacterSize(my_sf.highscore, 60);
	sfText_setCharacterSize(my_sf.text_hp, 50);
	sfText_setPosition(my_sf.text_hp, my_hp_pos);
	sfText_setPosition(my_sf.text_score, score_pos);
	sfText_setPosition(my_sf.text_lvl, text_pos);
	sfText_setPosition(my_sf.highscore, highscore_pos);
	sfText_setColor(my_sf.text_lvl, my_color);
	sfText_setColor(my_sf.text_score, my_color);
	sfText_setColor(my_sf.highscore, my_color);
	sfText_setColor(my_sf.text_hp, my_color);
	return (my_sf);
}
