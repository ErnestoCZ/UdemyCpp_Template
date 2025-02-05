#pragma once
#include <cstdint>

enum class Alliance{
    ALLIED,
    ENEMY
};
struct PlayerData
{
    std::uint32_t id;
    float x_pos;
    float y_pos;
    std::uint32_t health;
    std::uint32_t energy;
    Alliance alliance;

};

void printPlayerData(const PlayerData &player);
