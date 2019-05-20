/*
** EPITECH PROJECT, 2017
** main
** File description:
** my_hunter
*/

#include "my.h"

int main (int ac, char **av)
{
	sfEvent event;
	sfVideoMode mode = {1280, 720, 32};
	sfIntRect square = my_int_rect_settings(0, 0, 110, 110);
	sfTime time;
	my_declas_sf my_sf = my_set_options(my_sf, mode);
	sfVector2f duck_vect;
	sfVector2f position;

	if (my_help(ac, av) == 0)
		return (0);
	while (sfRenderWindow_isOpen(my_sf.window)) {
		duck_vect = vector(my_sf.duck_vect_x, my_sf.duck_vect_y);
		time = sfClock_getElapsedTime(my_sf.clock);
		my_sf = my_vect_and_display(time, my_sf, duck_vect, square);
		if (my_sf.seconds > my_sf.duck_speed) {
			square.left = my_sprite_cutter(square.left, 110, 330);
			sfClock_restart(my_sf.clock);
		}
		while (sfRenderWindow_pollEvent(my_sf.window, &event))
			my_sf = my_event_control(event, my_sf, position);
	}
}
