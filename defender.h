/*
** EPITECH PROJECT, 2020
** the game
** File description:
** defender
*/


#ifndef DEFENDER_H
#define DEFENDER_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>

typedef struct button_s {
    sfRectangleShape *rect;
    sfVector2f pos_rect;
}              button_t;

typedef struct audio_s{
    sfMusic *chala;
    float volume;
    sfMusic *ingame;
}           audio_t;

typedef struct game_s {
    int place;
    sfSprite *cloud;
    audio_t *audio;
    sfRenderWindow *window;
}              game_t;

enum menu_place{
    menu,
    inopt,
    playin,
    pause_men,
    back_g,
};

enum where{
    menuw,
    playw,
    pausew,
    settw,
    exitw,
};

enum menu_part{
    back,
    optback,
    dbz,
    play,
    settings,
    quit,
    how_icone,
};

enum sett_part{
    vol,
    vol_moy,
    vol_max,
    icone,
    screen,
    def,
    back_sett,
};

enum game_part {
    backg,
    settpau,
    dark,
    bmenu,
    bgame,
    goku,
    goku2,
};

typedef struct clock_s {
    sfClock *clock;
    sfTime time;
    float seconds;
}              move_t;

typedef struct title_s {
    sfTexture *menu_tt;
    sfSprite *menu_s;
    sfIntRect rect;
    sfVector2f menu_f;
}              menu_t;

typedef struct sett_s {
    sfTexture *vol_tex;
    sfSprite *vol_spr;
    sfIntRect vol_rect;
    sfVector2f sett_f;
    sfIntRect volume;
    sfIntRect back_m;
    sfIntRect size;
}              sett_t;

typedef struct play_s {
    sfTexture *tex;
    sfSprite *spr;
    sfIntRect pause;
    sfIntRect mvt;
    move_t *clock;
}              play_t;

menu_t **create_title(void);
void place_menu(menu_t **title, sfVector2f place, int which, char *sprite);
game_t *create_game(void);
void close_game(game_t *game, menu_t **title, sett_t **sett, play_t **pl);
sett_t **do_settings(void);
void set_positions(sett_t **sett, sfVector2f pos, int set, char *file);
void set_icone_position(sett_t **sett, sfVector2f pos, int set, char *file);
void set_back_menu(sett_t **sett, sfVector2f pos, int set, char *file);
void set_icone_position(sett_t **sett, sfVector2f pos, int set, char *file);
void goal_positions(sett_t **sett, sfVector2f pos, int set, char *file);
void goal_positions_size(sett_t **sett, sfVector2f pos, int set, char *file);
void setrect(menu_t **title);
void new_volume(sett_t **sett, game_t *game);
void audio_manager(game_t *game);
void create_music(game_t *game);
void do_volume(game_t *game, float new_vol);
play_t **create_play(void);
void fill_play(play_t **pl);
void display_sett(game_t *game, menu_t **title, sett_t **sett);
void display_menu(game_t *game, menu_t **title, sett_t **sett, play_t **pl);
void display_game(game_t *game, play_t **pl, menu_t **title, sett_t **sett);
void mouse_flex(game_t *game);
void display_game_obj(game_t *game, play_t **pl);
void sett_event(game_t *game, sett_t **sett);
void menu_event(game_t *game, sett_t **sett, menu_t **title, play_t **pl);
void pause_event(game_t *game, menu_t **title, play_t **pl, sett_t **sett);
void clock_sprite(play_t **pl, game_t *game);
void move_player(play_t **pl, int set, int max);

#endif /* !DEFENDER_H */
