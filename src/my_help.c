/*
** EPITECH PROJECT, 2017
** my_help
** File description:
** my_hunter
*/

#include "my.h"

void my_help_printer(void)
{
	my_printf("\n                 Hello welcome to my_hunter !\n\n");
	my_printf("Below you will find a little guide about ");
	my_printf("how this game works !\n\n\n");
	my_printf("A target will come from the left and you will have to ");
	my_printf("click on hit, that's all !\n");
	my_printf("Don't worry there will be only one target at the time !\n");
	my_printf("\n");
	my_printf("Every time you destroy a target, another one will pop !\n");
	my_printf("Every time you destroy a target, you score a point !\n");
	my_printf("Every time you destroy 10 targets\n");
	my_printf("The 10 following targets will go a little faster ;)\n");
	my_printf("You can pause the game by placing your mouse out of the ");
	my_printf("window\n");
	my_printf("You can exit the game anytime, by closing it or pressing");
	my_printf(" the ECS key\n\n");
	my_printf("To launch the game you have to type ./my_hunter\n");
	my_printf("Please do not add anything after ./my_hunter");
	my_printf("The game won't start :)\n\n");
	my_printf("That's it ! Have fun beating the highscore :) !\n\n");
}

int my_help(int ac, char **av)
{
	if (ac < 2)
		return (1);
	if (ac > 2)
		return (0);
	if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
		my_help_printer();
		return (0);
	}
	else
		return (0);
}
