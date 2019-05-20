/*
** EPITECH PROJECT, 2017
** my_event_keyboard
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_event_keyboard(sfEvent event, my_declas_sf my_sf)
{
	if (event.key.code == sfKeyEscape)
		my_display_end_game_screen(my_sf);
	if (event.key.code == sfKeyNum1)
		printf("KEY 1 PRESSED\n");
	return (my_sf);
}
