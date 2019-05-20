/*
** EPITECH PROJECT, 2017
** my_mouse_leftb
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_mouse_leftb(my_declas_sf my_sf, sfEvent event)
{
	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
		if (my_hit_box_check(my_sf,event) == 1)
			my_sf = my_score(my_sf);
		else
			my_sf = my_life(my_sf);
	}
	return (my_sf);
}

my_declas_sf my_mouse_move(sfEvent event, my_declas_sf my_sf,
			   sfVector2f position)
{
	my_sf.mouse_x = event.mouseMove.x - 30;
	my_sf.mouse_y = event.mouseMove.y - 30;
	position = vector(my_sf.mouse_x, my_sf.mouse_y);
	sfSprite_setPosition(my_sf.sp_cross, position);
	return (my_sf);
}

my_declas_sf my_mouse_out_window(sfEvent event, my_declas_sf my_sf)
{
	if (event.type == sfEvtMouseLeft)
		my_sf = my_mouse_out_loop(event, my_sf);
	return (my_sf);
}

my_declas_sf my_mouse_out_loop(sfEvent event, my_declas_sf my_sf)
{
	while (event.type != sfEvtMouseEntered) {
		sfRenderWindow_drawSprite(my_sf.window,my_sf.sp_pause, NULL);
		sfRenderWindow_display(my_sf.window);
		sfRenderWindow_pollEvent(my_sf.window, &event);
		if (my_mouse_in_or_escape(event, my_sf) == 1)
			return (my_sf);
	}
	return (my_sf);
}

int my_mouse_in_or_escape(sfEvent event, my_declas_sf my_sf)
{
	if (event.type == sfEvtClosed) {
		my_display_end_game_screen(my_sf);
		return (1);
	}
	if (event.type == sfEvtKeyPressed) {
		my_sf = my_event_keyboard(event, my_sf);
		return (1);
	}
	return (2);
}
