/*
** EPITECH PROJECT, 2017
** my_put_nbr_binary
** File description:
** my_ls
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void my_put_nbr_binary(unsigned int nb)
{
	int b = 2;
	int a = 0;

	if (nb > 2) {
		a = nb % b;
		nb = nb / b;
		my_put_nbr_binary(nb);
		my_putchar(a + 48);
	}
	else
		my_putchar(nb + 48);
}
