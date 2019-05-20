/*
** EPITECH PROJECT, 2017
** my_vect_and_display
** File description:
** my_hunter
*/

#include "my.h"

my_declas_sf my_vect_and_display(sfTime time, my_declas_sf my_sf,
				 sfVector2f duck_vect, sfIntRect square)
{
	my_display(my_sf,square);
	my_sf = my_moving_sprite(my_sf, duck_vect);
	my_sf.seconds = time.microseconds / 100000.0;
	return (my_sf);
}
