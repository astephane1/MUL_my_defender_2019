/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** event
*/

#include "defender.h"

void general_event(game_t *game, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
}

void sett_event(game_t *game, sett_t **sett)
{
    sfEvent event;

    if (event.type == sfEvtMouseButtonPressed
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        goal_back_menu(game, sett);
        new_volume(sett, game);
    }
    general_event(game, event);
}

void menu_event(game_t *game, sett_t **sett, menu_t **title, play_t **pl)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (event.type == sfEvtMouseButtonPressed
        && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            goal_exit(game, title);
            button_play(game, title, pl, sett);
            goal_setting(game, title, sett);
        }
        general_event(game, event);
    }
}

void pause_game(game_t *game, menu_t **title, play_t **pl, sett_t **sett)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (event.type == sfEvtMouseButtonPressed
        && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            back_to_play(game, pl);
            stop_setting(game, title, sett, pl);
            back_to_menu(game, pl);
        }
        if (event.type == sfEvtKeyPressed
            && sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            game->place = playw;
        general_event(game, event);
    }
}

void play_event(game_t *game, play_t **pl, menu_t **title, sett_t **sett)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (event.type == sfEvtKeyPressed
            && sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
            game->place = pausew;
            aff_pause_game(game, title, pl, sett);
            }
    }
}
