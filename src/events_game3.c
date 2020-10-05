/*
** EPITECH PROJECT, 2019
** event
** File description:
** game
*/

#include "defender.h"

void back_to_play(game_t *game, play_t **pl)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f mouse_f;
    sfVector2f pos = sfSprite_getPosition(pl[bgame]->spr);

    mouse_f.x = mouse.x;
    mouse_f.y = mouse.y;
    if (pos.x < mouse_f.x && pos.x + 380 > mouse_f.x) {
        if (pos.y < mouse_f.y && pos.y + 210 > mouse_f.y) {
            game->place = playw;
        }
    }
}

void stop_setting(game_t *game, menu_t **title, sett_t **sett, play_t **pl)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f mouse_f;
    sfVector2f pos = sfSprite_getPosition(pl[settpau]->spr);

    mouse_f.x = mouse.x;
    mouse_f.y = mouse.y;
    if (pos.x < mouse_f.x && pos.x + 380 > mouse_f.x)
        if (pos.y < mouse_f.y && pos.y + 210 > mouse_f.y) {
            game->place = settw;
            aff_sett(game, title, sett);
            game->place = pausew;
        }
}
