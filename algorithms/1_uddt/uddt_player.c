#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct player
{
    char Name[50];
    float HP;
    int PP;
};


int main(int argc, char const *argv[])
{
    struct player my_player = {0};

    strcpy(my_player.Name, "Dodo");
    my_player.HP = 100;
    my_player.PP = 10;

    printf("Player name: %s \n", my_player.Name);
    printf("Player hp: %f \n", my_player.HP);
    printf("Player pp: %d \n", my_player.PP);

    return 0;
}
