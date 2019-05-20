/*
** EPITECH PROJECT, 2017
** my_put_nbr_unsigned
** File description:
** my_ls
*/

#include <unistd.h>
#include "my.h"

unsigned int  my_put_nbr_unsigned(unsigned int nb)
{
	int a = 0;

	if (nb < 9)
	{
		a = nb % 10;
		my_putchar(a + 48);
	}
	if (nb == 9)
		my_putchar(nb + 48);
	if (nb > 9) {
		a = nb % 10;
		nb = nb / 10;
		my_put_nbr_unsigned(nb);
		my_putchar(a + 48);
	}
	return (nb);
}
