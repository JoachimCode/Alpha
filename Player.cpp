#include "Player.h"
#include <iostream>

Player::Player() : pos(0) {}

void Player::move(char input) {
    if (input == 'a') {
        pos += 1;
    }
}

int Player::getPos() const {
    return pos;
}