/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** objects
*/

#include "defender.h"

void back_end(play_t **pl, int set, char *file)
{
    pl[set]->tex = sfTexture_createFromFile(file, NULL);
    pl[set]->spr = sfSprite_create();
    sfSprite_setTexture(pl[set]->spr, pl[set]->tex, sfTrue);
}

void display_icon(play_t **pl, sfVector2f pos, int set, char *file)
{
    pl[set]->tex = sfTexture_createFromFile(file, NULL);
    pl[set]->spr = sfSprite_create();
    sfSprite_setTexture(pl[set]->spr, pl[set]->tex, sfTrue);
    sfSprite_setPosition(pl[set]->spr, pos);
}

void puts_player(play_t **pl, sfVector2f pos, int set, char *file)
{
    pl[set]->tex = sfTexture_createFromFile(file, NULL);
    pl[set]->spr = sfSprite_create();
    sfSprite_setTexture(pl[set]->spr, pl[set]->tex, sfTrue);
    sfSprite_setTextureRect(pl[set]->spr, pl[set]->pause);
    sfSprite_setPosition(pl[set]->spr, pos);
}
