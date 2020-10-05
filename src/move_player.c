/*
** EPITECH PROJECT, 2019
** clock_time
** File description:
** moving
*/

#include "defender.h"

void move_x_y(play_t **pl, game_t *game)
{
    sfVector2f spr_position = sfSprite_getPosition(pl[goku]->spr);
    sfVector2f position = {50, 155};

    make_goku(pl, spr_position, position);
}

void move_player(play_t **pl, int set, int max)
{
    pl[set]->pause.left += 33;
    if (pl[set]->pause.left >= max)
        pl[set]->pause.left = 0;
    sfSprite_setTextureRect(pl[set]->spr, pl[set]->pause);
}

void clock_of_player(play_t **pl, game_t *game)
{
    int set = 0;
    int max = 99;

    pl[goku]->clock->time =
        sfClock_getElapsedTime(pl[goku]->clock->clock);
    pl[goku]->clock->seconds =
        pl[goku]->clock->time.microseconds / 1000000.0;
    if (pl[goku]->clock->seconds > 0.15) {
        move_player(pl, goku, max);
        sfClock_restart(pl[goku]->clock->clock);
    }
    move_x_y(pl, game);
}
