/*
** EPITECH PROJECT, 2017
** my_event_control
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_event_control(sfEvent event, my_declas_sf my_sf,
			      sfVector2f position)
{
	my_sf = my_mouse_out_window(event, my_sf);
	if (event.type == sfEvtMouseButtonPressed)
		my_sf = my_mouse_leftb(my_sf,event);
	if (event.type == sfEvtMouseMoved)
		my_sf = my_mouse_move(event, my_sf, position);
	if (event.type == sfEvtKeyPressed)
		my_sf = my_event_keyboard(event, my_sf);
	return (my_sf);
}
