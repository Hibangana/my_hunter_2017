/*
** EPITECH PROJECT, 2017
** my_texture_creater
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_texture_creator(my_declas_sf my_sf)
{
	my_sf.text_bg = sfTexture_createFromFile("my_p/background.png", NULL);
	my_sf.text_duck = sfTexture_createFromFile("my_p/spritesheet.png"
						   , NULL);
	my_sf.text_cross = sfTexture_createFromFile("my_p/crosshair.png"
						    , NULL);
	my_sf.text_hplvl = sfTexture_createFromFile("my_p/hplvl.png", NULL);
	my_sf.text_pause = sfTexture_createFromFile("my_p/pause.png", NULL);
	my_sf.text_end = sfTexture_createFromFile("my_p/game_over.png", NULL);
	return (my_sf);
}

my_declas_sf my_sprite_creator(my_declas_sf my_sf)
{
	my_sf.sp_bg = sfSprite_create();
	my_sf.sp_duck = sfSprite_create();
	my_sf.sp_cross = sfSprite_create();
	my_sf.sp_hplvl = sfSprite_create();
	my_sf.sp_pause = sfSprite_create();
	my_sf.sp_end = sfSprite_create();
	return (my_sf);
}

my_declas_sf my_link_creator(my_declas_sf my_sf)
{
	sfSprite_setTexture(my_sf.sp_bg, my_sf.text_bg, sfTrue);
	sfSprite_setTexture(my_sf.sp_duck, my_sf.text_duck, sfTrue);
	sfSprite_setTexture(my_sf.sp_cross, my_sf.text_cross, sfTrue);
	sfSprite_setTexture(my_sf.sp_hplvl, my_sf.text_hplvl, sfTrue);
	sfSprite_setTexture(my_sf.sp_pause, my_sf.text_pause, sfTrue);
	sfSprite_setTexture(my_sf.sp_end, my_sf.text_end, sfTrue);
	return (my_sf);
}
