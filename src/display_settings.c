/*
** EPITECH PROJECT, 2019
** settings
** File description:
** game
*/

#include "defender.h"

void pic_settings(sett_t **sett)
{
    sfVector2f pos = {1000, 300};
    sfVector2f vol_pos = {550, 270};
    sfVector2f back_me = {100, 100};
    sfVector2f pos_size = {1000, 500};

    goal_icon_position(sett, vol_pos, icone, "assets/volume.png");
    vol_pos.y += 200;
    goal_icon_position(sett, vol_pos, screen, "assets/screen.png");
    goal_end_menu(sett, back_me, back_sett, "assets/back_menu.png");
    puts_positions(sett, pos, vol, "assets/min_vol.png");
    pos.x += 200;
    puts_positions(sett, pos, vol_moy, "assets/moy_vol.png");
    pos.x += 200;
    puts_positions(sett, pos, vol_max, "assets/max_vol.png");
}

void setrect(menu_t **title)
{
    sfIntRect rect_f = {0, 0, 770, 210};
    sfIntRect play_f = {0, 0, 380, 210};
    sfIntRect how_f = {0, 0, 100, 100};

    title[how_icone]->rect = how_f;
    title[dbz]->rect = rect_f;
    title[play]->rect = play_f;
    title[settings]->rect = play_f;
    title[quit]->rect = play_f;
}

sett_t **do_settings(void)
{
    sett_t **sett = malloc(sizeof(sett_t *) * (8));
    sfIntRect rect_s = {0, 0, 100, 100};
    sfIntRect handle_vol = {0, 0, 380, 210};
    sfIntRect han_size = {220, 75};
    int i = 0;

    sett[7] = NULL;
    while (i < 7) {
        sett[i] = malloc(sizeof(sett_t));
        i++;
    }
    sett[back_sett]->back_m = rect_s;
    sett[icone]->volume = handle_vol;
    sett[screen]->volume = handle_vol;
    sett[vol]->vol_rect = rect_s;
    sett[vol_moy]->vol_rect = rect_s;
    sett[vol_max]->vol_rect = rect_s;
    pic_settings(sett);
    return (sett);
}
