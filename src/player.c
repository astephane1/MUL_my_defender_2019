/*
** EPITECH PROJECT, 2019
** player
** File description:
** defender
*/

#include "defender.h"

void menu_play(play_t **player)
{
    sfVector2f bot = {770, 100};
    sfVector2f top = {770, 700};
    sfVector2f mid = {770, 400};

    back_end(player, backg, "assets/map.png");
    back_end(player, dark, "assets/pause_menu.png");
    display_icon(player, bot, bgame, "assets/back_to_game.png");
    display_icon(player, mid, settpau, "assets/sett_pause.png");
    display_icon(player, top, bmenu, "assets/polm.png");
}

void set_player(play_t **player)
{
    sfVector2f position = {55, 55};

    puts_player(player, position, goku, "assets/ko.png");
    for (int i = 0; player[i] != NULL; i++) {
        player[i]->clock = malloc(sizeof(move_t));
        player[i]->clock->clock = sfClock_create();
        player[i]->clock->seconds = 0;
    }
}

play_t **create_play(void)
{
    play_t **player = malloc(sizeof(play_t) *17);
    int i = 0;
    sfIntRect pause_b = {0, 0, 100, 100};
    sfIntRect size_ico = {0, 0, 380, 210};
    sfIntRect size = {0, 0, 120, 110};

    player[16] = NULL;
    while (i < 16) {
        player[i] = malloc(sizeof(play_t));
        i++;
    }
    for (int i = goku; i != goku2 + 1; i++)
    player[i]->pause = size;
    menu_play(player);
    //set_player(player);
    return (player);
}
