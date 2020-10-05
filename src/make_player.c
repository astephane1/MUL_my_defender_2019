/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** player
*/

#include "defender.h"

void make_goku(play_t **pl, sfVector2f spr_pos, sfVector2f pos)
{
    static int go = 0;
    sfVector2f go_x = {4.5, 0};
    sfVector2f go_y = {0, 4.5};

    if (go == 0)
        sfSprite_move(pl[goku]->spr, go_x);
    if (spr_pos.x >= 1760)
        go = 1;
    if (go == 1) {
        pl[goku]->pause.top = 46;
        sfSprite_setTextureRect(pl[goku]->spr, pl[goku]->pause);
        sfSprite_move(pl[goku]->spr, go_y);
    }
    if (spr_pos.y >= 830) {
        sfSprite_setPosition(pl[goku]->spr, pos);
        go = 0;
        pl[goku]->pause.top = 0;
    }
}
