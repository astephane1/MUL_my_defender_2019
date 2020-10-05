/*
** EPITECH PROJECT, 2019
** defender
** File description:
** game
*/

#include "defender.h"

void place_menu(menu_t **title, sfVector2f place, int which, char *sprite)
{
    title[which]->menu_tt = sfTexture_createFromFile(sprite, NULL);
    title[which]->menu_s = sfSprite_create();
    sfSprite_setTexture(title[which]->menu_s, title[which]->menu_tt, sfTrue);
    sfSprite_setTextureRect(title[which]->menu_s, title[which]->rect);
    title[which]->menu_f = place;
    sfSprite_setPosition(title[which]->menu_s, title[which]->menu_f);
}

void take_pos_menu(menu_t **title)
{
    sfVector2f place = {500, 300};
    sfVector2f menux = {630, 50};

    place_menu(title, menux, dbz, "assets/titre.png");
    place_menu(title, place, play, "assets/scope.png");
    place.y += 150;
    place_menu(title, place, settings, "assets/settings.png");
    place.y += 150;
    place_menu(title, place, quit, "assets/exit.png");
}

void fill_menu(menu_t **title)
{
    sfVector2f place = {500, 300};
    sfVector2f menux = {630, 50};

    title[back]->menu_tt = sfTexture_createFromFile("assets/zelda.png", NULL);
    title[back]->menu_s = sfSprite_create();
    title[optback]->menu_tt = sfTexture_createFromFile("./assets/house.png",
NULL);
    title[optback]->menu_s = sfSprite_create();
    sfSprite_setTexture(title[optback]->menu_s, title[optback]->menu_tt,
                        sfTrue);
    sfSprite_setTexture(title[back]->menu_s, title[back]->menu_tt, sfTrue);
    take_pos_menu(title);
}

menu_t **create_title(void)
{
    menu_t **title = malloc(sizeof(menu_t *) * (12));
    int i = 0;

    title[11] = NULL;
    while (i < 11) {
        title[i] = malloc(sizeof(menu_t));
        i++;
    }
    setrect(title);
    fill_menu(title);
    return (title);
}

game_t *create_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    sfVideoMode mode = {1920, 1080, 32};

    game->window = sfRenderWindow_create(mode, " MY DEFENDER",
sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 60);
    game->place = 0;
    create_music(game);
    return (game);
}
