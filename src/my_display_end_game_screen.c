/*
** EPITECH PROJECT, 2017
** my_display_end_game_screen
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_endgame(my_declas_sf my_sf)
{
	sfRenderWindow_close(my_sf.window);
	my_printf("Game has ended ! Your score: %i\n", my_sf.score);
	return (my_sf);
}

void my_display_end_game_screen(my_declas_sf my_sf)
{
	sfEvent event;
	sfVector2f score_pos = vector(800 , 310);

	while(sfRenderWindow_isOpen(my_sf.window)) {
		sfRenderWindow_clear(my_sf.window, sfBlack);
		sfRenderWindow_drawSprite(my_sf.window, my_sf.sp_end, NULL);
		sfText_setCharacterSize(my_sf.text_score, 60);
		sfText_setPosition(my_sf.text_score,score_pos);
		sfRenderWindow_drawText(my_sf.window, my_sf.text_score, NULL);
		sfRenderWindow_drawText(my_sf.window, my_sf.highscore, NULL);
		sfRenderWindow_display(my_sf.window);
		sfRenderWindow_pollEvent(my_sf.window, &event);
		if(event.key.code == sfKeyEscape){
			my_sf = my_endgame(my_sf);
			return;
		}
		if(event.type == sfEvtClosed) {
			my_sf = my_endgame(my_sf);
			return;
		}
	}
}
