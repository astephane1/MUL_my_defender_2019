/*
** EPITECH PROJECT, 2019
** game
** File description:
** display
*/

#include "defender.h"

void aff_sett(game_t *game, menu_t **title, sett_t **sett)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(game->window)) {
        game->place = settw;
        sfRenderWindow_clear(game->window, sfBlack);
        while (sfRenderWindow_pollEvent(game->window, &event))
            sett_event(game, sett);
        sfRenderWindow_drawSprite(game->window, title[optback]->menu_s, NULL);
        sfRenderWindow_drawSprite(game->window, sett[vol]->vol_spr, NULL);
        sfRenderWindow_drawSprite(game->window, sett[vol_moy]->vol_spr, NULL);
        sfRenderWindow_drawSprite(game->window, sett[vol_max]->vol_spr, NULL);
        sfRenderWindow_drawSprite(game->window, sett[icone]->vol_spr, NULL);
        sfRenderWindow_drawSprite(game->window, sett[back_sett]->vol_spr, NULL);
        if (game->place != settw)
            return;
        mouse_flex(game);
        sfRenderWindow_display(game->window);
    }
}

void display_menu(game_t *game, menu_t **title, sett_t **sett, play_t **pl)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(game->window)) {
        game->place = menuw;
        menu_event(game, sett, title, pl);
        sfRenderWindow_clear(game->window, sfBlack);
        sfRenderWindow_drawSprite(game->window, title[back]->menu_s, NULL);
        sfRenderWindow_drawSprite(game->window, title[dbz]->menu_s, NULL);
        sfRenderWindow_drawSprite(game->window, title[play]->menu_s, NULL);
        sfRenderWindow_drawSprite(game->window, title[settings]->menu_s, NULL);
        sfRenderWindow_drawSprite(game->window, title[quit]->menu_s, NULL);
        mouse_flex(game);
        if (game->place == exitw) {
            return;
        }
        sfRenderWindow_display(game->window);
    }
}

void display_game(game_t *game, play_t **pl, menu_t **title, sett_t **sett)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack);
        play_event(game, pl, title, sett);
        draw_game(game, pl);
        mouse_flex(game);
        clock_of_player(pl, game);
        if (game->place == menuw)
            return;
        sfRenderWindow_display(game->window);
    }
}

void aff_pause_game(game_t *game, menu_t **title, play_t **pl,
                        sett_t **sett)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack);
        pause_game(game, title, pl, sett);
        draw_game(game, pl);
        sfRenderWindow_drawSprite(game->window, pl[dark]->spr, NULL);
        sfRenderWindow_drawSprite(game->window, pl[bmenu]->spr, NULL);
        sfRenderWindow_drawSprite(game->window, pl[settpau]->spr, NULL);
        sfRenderWindow_drawSprite(game->window, pl[bgame]->spr, NULL);
        mouse_flex(game);
        if (game->place == playw || game->place == menuw)
            return;
        sfRenderWindow_display(game->window);
    }
}
