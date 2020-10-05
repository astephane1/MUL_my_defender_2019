/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** place_icone
*/

#include "defender.h"

void goal_end_menu(sett_t **sett, sfVector2f pos, int set, char *file)
{
    sett[set]->vol_tex = sfTexture_createFromFile(file, NULL);
    sett[set]->vol_spr = sfSprite_create();
    sfSprite_setTexture(sett[set]->vol_spr, sett[set]->vol_tex, sfTrue);
    sfSprite_setTextureRect(sett[set]->vol_spr, sett[set]->back_m);
    sett[set]->sett_f = pos;
    sfSprite_setPosition(sett[set]->vol_spr, sett[set]->sett_f);
}

void goal_icon_position(sett_t **sett, sfVector2f pos, int set, char *file)
{
    sett[set]->vol_tex = sfTexture_createFromFile(file, NULL);
    sett[set]->vol_spr = sfSprite_create();
    sfSprite_setTexture(sett[set]->vol_spr, sett[set]->vol_tex, sfTrue);
    sfSprite_setTextureRect(sett[set]->vol_spr, sett[set]->volume);
    sett[set]->sett_f = pos;
    sfSprite_setPosition(sett[set]->vol_spr, sett[set]->sett_f);
}

void puts_positions(sett_t **sett, sfVector2f pos, int set, char *file)
{
    sett[set]->vol_tex = sfTexture_createFromFile(file, NULL);
    sett[set]->vol_spr = sfSprite_create();
    sfSprite_setTexture(sett[set]->vol_spr, sett[set]->vol_tex, sfTrue);
    sfSprite_setTextureRect(sett[set]->vol_spr, sett[set]->vol_rect);
    sett[set]->sett_f = pos;
    sfSprite_setPosition(sett[set]->vol_spr, sett[set]->sett_f);
}

void puts_positions_size(sett_t **sett, sfVector2f pos, int set, char *file)
{
    sett[set]->vol_tex = sfTexture_createFromFile(file, NULL);
    sett[set]->vol_spr = sfSprite_create();
    sfSprite_setTexture(sett[set]->vol_spr, sett[set]->vol_tex, sfTrue);
    sfSprite_setTextureRect(sett[set]->vol_spr, sett[set]->size);
    sett[set]->sett_f = pos;
    sfSprite_setPosition(sett[set]->vol_spr, sett[set]->sett_f);
}
