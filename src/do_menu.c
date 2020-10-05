/*
** EPITECH PROJECT, 2019
** settings
** File description:
** menu
*/

#include "defender.h"

void goal_back_menu(game_t *game, sett_t **sett)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f mouse_final;
    sfVector2f pos = sfSprite_getPosition(sett[back_sett]->vol_spr);

    mouse_final.x = mouse.x;
    mouse_final.y = mouse.y;
    if (pos.x < mouse_final.x && pos.x + 100 > mouse_final.x) {
        if (pos.y < mouse_final.y && pos.y + 100 > mouse_final.y)
            game->place = menuw;
    }
}

void new_volume(sett_t **sett, game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f mouse_final;
    sfVector2f pos = sfSprite_getPosition(sett[vol]->vol_spr);
    sfVector2f pos2 = sfSprite_getPosition(sett[vol_moy]->vol_spr);
    sfVector2f pos3 = sfSprite_getPosition(sett[vol_max]->vol_spr);

    mouse_final.x = mouse.x;
    mouse_final.y = mouse.y;
    if (pos.x < mouse_final.x && pos.x + 100 > mouse_final.x) {
        if (pos.y < mouse_final.y && pos.y + 100 > mouse_final.y)
            do_volume(game, 0);
    }
    if (pos2.x < mouse_final.x && pos2.x + 100 > mouse_final.x) {
        if (pos2.y < mouse_final.y && pos2.y + 100 > mouse_final.y)
            do_volume(game, 30);
    }
    if (pos3.x < mouse_final.x && pos3.x + 100 > mouse_final.x) {
        if (pos3.y < mouse_final.y && pos3.y + 100 > mouse_final.y)
            do_volume(game, 50);
    }
}

void goal_sett_pause(game_t *game, sett_t **sett, menu_t **title)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f mouse_final;
    sfVector2f pos = sfSprite_getPosition(sett[back_sett]->vol_spr);

    mouse_final.x = mouse.x;
    mouse_final.y = mouse.y;
    if (pos.x < mouse_final.x && pos.x + 100 > mouse_final.x) {
        if (pos.y < mouse_final.y && pos.y + 100 > mouse_final.y)
            aff_sett(game, title, sett);
    }
}

void draw_game(game_t *game, play_t **pl)
{
    sfRenderWindow_drawSprite(game->window, pl[backg]->spr, NULL);
    sfRenderWindow_drawSprite(game->window, pl[goku]->spr, NULL);
}
