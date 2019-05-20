/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** my_ls
*/

#include <unistd.h>
#include "my.h"

long my_put_nbr(long nb)
{
	int a = 0;

	if (nb < 0) {
		nb = nb * - 1;
		my_putchar('-');
	}
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
		my_put_nbr(nb);
		my_putchar(a + 48);
	}
	return (nb);
}
