/*
** EPITECH PROJECT, 2017
** my_display
** File description:
** my_hunter
*/

#include "my.h"

void my_display(my_declas_sf my_sf, sfIntRect rect)
{
	sfSprite_setTextureRect(my_sf.sp_duck, rect);
	sfRenderWindow_display(my_sf.window);
	sfRenderWindow_clear(my_sf.window, sfBlack);
	sfRenderWindow_drawSprite(my_sf.window, my_sf.sp_bg, NULL);
	sfRenderWindow_drawSprite(my_sf.window, my_sf.sp_duck, NULL);
	sfRenderWindow_drawSprite(my_sf.window, my_sf.sp_cross, NULL);
	sfRenderWindow_drawSprite(my_sf.window, my_sf.sp_hplvl, NULL);

	sfText_setString(my_sf.text_lvl, my_int_to_string(my_sf.level));
	sfRenderWindow_drawText(my_sf.window, my_sf.text_lvl, NULL);
	sfText_setString(my_sf.text_score, my_int_to_string(my_sf.score));
	sfText_setString(my_sf.text_hp, my_int_to_string(my_sf.life));
	sfRenderWindow_drawText(my_sf.window, my_sf.text_hp, NULL);
	sfText_setString(my_sf.highscore, "over 9000");
}
