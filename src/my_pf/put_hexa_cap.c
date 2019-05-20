/*
** EPITECH PROJECT, 2017
** my_put_hexa_cap
** File description:
** my_ls
*/

#include <unistd.h>
#include "my.h"

void put_hexa_cap(unsigned int nb,unsigned int b)
{
	int a = 0;

	if (nb > b) {
		a = nb % b;
		nb = nb / b;
		put_hexa_cap(nb,b);
		if (a > 9)
			my_putchar(a + 48 + 7);
		else
			my_putchar(a + 48);
	}
	else
		if (nb > 9)
			my_putchar(nb + 48 + 7);
		else
			my_putchar(nb + 48);
}
