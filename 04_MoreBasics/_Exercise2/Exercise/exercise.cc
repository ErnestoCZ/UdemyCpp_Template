#include <iostream>

#include "exercise.h"


void printPlayerData(const PlayerData &player){

    std::cout << "Pos: " << "( " << player.x_pos << " , " << player.y_pos << " )";
}
