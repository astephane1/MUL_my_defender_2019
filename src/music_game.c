/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** music game
*/

#include "defender.h"

void create_music(game_t *game)
{
    game->audio = malloc(sizeof(audio_t));
    game->audio->volume = 30;
    game->audio->chala = sfMusic_createFromFile("./assets/menu.ogg");
    sfMusic_setLoop(game->audio->chala, sfTrue);
    sfMusic_play(game->audio->chala);
    game->audio->ingame = sfMusic_createFromFile("./assets/game.ogg");
    sfMusic_setLoop(game->audio->ingame, sfTrue);
    do_volume(game, 30);
}

void do_volume(game_t *game, float new_vol)
{
    sfMusic_setVolume(game->audio->chala, new_vol);
    sfMusic_setVolume(game->audio->ingame, new_vol);
}

void audio_play(game_t *game)
{
    if (game->place == playw) {
        sfMusic_stop(game->audio->chala);
        sfMusic_play(game->audio->ingame);
    }
    else if (game->place == menuw) {
        sfMusic_stop(game->audio->ingame);
        sfMusic_play(game->audio->chala);
    }
}
