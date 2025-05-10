#include "Bullet.h"
#include <iostream>
#include <SFML/Graphics.hpp>

Bullet::Bullet(float startX, float startY) : 
x(startX), y(startY), speed(1.f) {
    createBullet(startX, startY);
}

void Bullet::update() {
    sf::Vector2f newPos = sf::Vector2f(getx()+speed, gety());
    Bullet::shape.setPosition(newPos);
}

float Bullet::getx() const {
    return x;
}

float Bullet::gety() const {
    return y;
}

void Bullet::createBullet(float x, float y) {
    Bullet::shape.setSize(sf::Vector2f(5.f, 10.f));
    Bullet::shape.setFillColor(sf::Color::Red);
    Bullet::shape.setPosition(sf::Vector2f(x,y));
    speed = 5.f;
}






