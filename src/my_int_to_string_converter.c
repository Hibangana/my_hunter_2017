/*
** EPITECH PROJECT, 2017
** my_int_to_string
** File description:
** my_hunter
*/

#include "my.h"

int my_get_nb_size(int nb)
{
	int i = 0;

	while (nb > 0) {
		nb = nb / 10;
		i++;
	}
	return (i);
}

char *my_int_to_string(int nb)
{
	int i = 0;
	int k = my_get_nb_size(nb);
	char *str = malloc(sizeof(char) * k + 1);

	if (nb < 10) {
		str[i] = nb % 10 + 48;
		str[i + 1] = '\0';
		return (str);
	}
	while (str[i])
		i++;
	i = i - 5;
	while (i >= 0){
		str[i] = nb % 10 + 48;
		nb = nb / 10;
		i = i - 1;
	}
	str[k] = '\0';
	return (str);
}
