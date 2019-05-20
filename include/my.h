/*
** EPITECH PROJECT, 2017
** my_h
** File description:
** my_hunter
*/

#ifndef MY_H_
#define MY_H_
#include "my_printf.h"
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
struct declarations {
	struct sfRenderWindow *window;
	struct sfTexture *text_bg;
	struct sfTexture *text_duck;
	struct sfTexture *text_cross;
	struct sfTexture *text_hplvl;
	struct sfTexture *text_pause;
	struct sfTexture *text_end;
	struct sfSprite *sp_bg;
	struct sfSprite *sp_duck;
	struct sfSprite *sp_cross;
	struct sfSprite *sp_hplvl;
	struct sfSprite *sp_pause;
	struct sfSprite *sp_end;
	struct framebuffer_t *framebuffer;
	struct sfClock *clock;
	struct sfVector *position;
	sfText *text_lvl;
	sfText *text_score;
	sfText *highscore;
	sfText *text_hp;
	sfFont *police;
	int random;
	float seconds;
	float duck_speed;
	int duck_pos_x;
	int duck_pos_y;
	int score;
	int life;
	int level;
	int mouse_x;
	int mouse_y;
	int click_x;
	int click_y;
	int duck_vect_x;
	int duck_vect_y;
};
typedef struct declarations my_declas_sf;
int my_help(int ac, char **av);
sfColor my_set_color(int red, int green, int blue, int alpha);
my_declas_sf my_text_creator(my_declas_sf my_sf);
my_declas_sf my_vect_and_display(sfTime time, my_declas_sf my_sf,
				 sfVector2f duck_vect,sfIntRect square);
char *my_int_to_string(int nb);
my_declas_sf my_set_options(my_declas_sf my_sf, sfVideoMode mode);
void my_display(my_declas_sf my_sf, sfIntRect rect);
sfIntRect my_int_rect_settings(int t, int l, int w, int h);
my_declas_sf my_event_control(sfEvent event, my_declas_sf my_sf,
			      sfVector2f position);
int my_sprite_cutter(int value, int add, int max);
sfVector2f vector(float a, float b);
my_declas_sf my_moving_sprite(my_declas_sf my_sf, sfVector2f duck);
my_declas_sf my_texture_creator(my_declas_sf my_sf);
my_declas_sf my_sprite_creator(my_declas_sf my_sf);
my_declas_sf my_link_creator(my_declas_sf my_sf);
my_declas_sf my_mouse_leftb(my_declas_sf my_sf, sfEvent event);
my_declas_sf my_mouse_move(sfEvent event, my_declas_sf my_sf,
			   sfVector2f position);
my_declas_sf my_mouse_out_window(sfEvent event, my_declas_sf my_sf);
my_declas_sf my_event_keyboard(sfEvent event, my_declas_sf my_sf);
int my_mouse_in_or_escape(sfEvent event, my_declas_sf my_sf);
my_declas_sf my_mouse_out_loop(sfEvent event, my_declas_sf my_sf);
void my_display_end_game_screen(my_declas_sf my_sf);
int my_hit_box_check(my_declas_sf my_sf, sfEvent event);
my_declas_sf my_score(my_declas_sf my_sf);
my_declas_sf my_life(my_declas_sf my_sf);
#endif
