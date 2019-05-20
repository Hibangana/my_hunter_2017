##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_hunter
##

SRC	=	src/my_pf/my_putstr.c			\
		src/my_pf/put_hexa_cap.c		\
		src/my_pf/case_cap_c.c			\
		src/my_pf/case_cap_s.c			\
		src/my_pf/case_check.c			\
		src/my_pf/my_printf.c                   \
		src/my_pf/my_put_nbr_binary.c           \
		src/my_pf/my_put_nbr.c                  \
		src/my_pf/my_put_nbr_unsigned.c         \
		src/my_pf/my_strlen.c                   \
		src/my_pf/put_hexa_for_long.c           \
		src/my_pf/put_hexa_or_oct.c             \
		src/my_pf/removespace.c                 \
		src/my_pf/testspacepresence.c           \
		src/my_pf/my_putchar.c                  \
		src/main.c				\
		src/my_set_options.c			\
		src/my_display.c			\
		src/my_int_rect_settings.c		\
		src/my_event_control.c			\
		src/my_sprite_cutter.c			\
		src/my_set_vector_options.c		\
		src/my_moving_sprite.c			\
		src/my_creator.c			\
		src/my_event_mouse.c			\
		src/my_event_keyboard.c			\
		src/my_hit_box_check.c			\
		src/my_display_end_game_screen.c	\
		src/my_score_life.c			\
		src/my_int_to_string_converter.c	\
		src/my_vect_and_display.c		\
		src/my_text_creator.c			\
		src/my_help.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CFLAGS	=	-Wall -Wextra -I./include

all: $(NAME)

$(NAME): $(OBJ)
	ar rc libmy.a $(OBJ)
	gcc -o $(NAME) $(OBJ) -lc_graph_prog -I./include

clean:
	rm -rf $(OBJ)   \
	rm *~

fclean: clean
	rm -rf $(NAME)  \
	rm *~           \
	rm *.a

re: fclean all

.PHONY: all clean fclean re
