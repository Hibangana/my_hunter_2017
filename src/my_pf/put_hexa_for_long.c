/*
** EPITECH PROJECT, 2017
** my_put_hexa_for_long
** File description:
** my_ls
*/

#include <unistd.h>
#include "my.h"

void nullpointertest(long nb)
{
	if (nb == 0)
		my_putstr("(nil)");
	else
	{
		my_putstr("0x");
		put_hexa_for_long(nb,16);
	}
}

void put_hexa_for_long(long nb,unsigned int b)
{
	int a = 0;

	if (nb > b) {
		a = nb % b;
		nb = nb / b;
		put_hexa_for_long(nb,b);
		if (a > 9)
			my_putchar(a + 48 + 39);
		else
			my_putchar(a + 48);
	}
	else
		if (nb > 9)
			my_putchar(nb + 48 + 39);
		else
			my_putchar(nb + 48);
}
