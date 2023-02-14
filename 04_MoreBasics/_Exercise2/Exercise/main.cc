#include <iostream>
#include <random>
#include "exercise.h"

int main()
{


    PlayerData p1 = PlayerData{.id = 0,
                               .x_pos = 10.0F,
                               .y_pos = 1.0F,
                               .health = 100,
                               .energy = 50,
                               .alliance = Alliance::ALLIED};
    PlayerData p2 = PlayerData{.id = 0,
                               .x_pos = 12.0F,
                               .y_pos = 6.0F,
                               .health = 80,
                               .energy = 50,
                               .alliance = Alliance::ENEMY};

    printPlayerData(p1);
    printPlayerData(p2);
    return 0;
}
