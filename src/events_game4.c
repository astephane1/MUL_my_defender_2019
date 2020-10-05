/*
** EPITECH PROJECT, 2019
** event manager
** File description:
** yes
*/

#include "defender.h"

void goal_exit(game_t *game, menu_t **title)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f mouse_f;
    sfVector2f pos = sfSprite_getPosition(title[quit]->menu_s);

    mouse_f.x = mouse.x;
    mouse_f.y = mouse.y;
    if (pos.x < mouse_f.x && pos.x + 380 > mouse_f.x)
        if (pos.y < mouse_f.y && pos.y + 210 > mouse_f.y) {
            game->place = exitw;
        }
}

void goal_setting(game_t *game, menu_t **title, sett_t **sett)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f mouse_f;
    sfVector2f pos = sfSprite_getPosition(title[settings]->menu_s);

    mouse_f.x = mouse.x;
    mouse_f.y = mouse.y;
    if (pos.x < mouse_f.x && pos.x + 380 > mouse_f.x)
        if (pos.y < mouse_f.y && pos.y + 210 > mouse_f.y) {
            aff_sett(game, title, sett);
        }
}

void close_game(game_t *game, menu_t **title, sett_t **sett, play_t **pl)
{
    sfMusic_destroy(game->audio->chala);
    sfMusic_destroy(game->audio->ingame);
    sfRenderWindow_destroy(game->window);
    free (game);
    free (sett);
    free (pl);
    free (title);
}
