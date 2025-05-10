#ifndef BULLET_H
#define BULLET_H
#include <SFML/Graphics.hpp>

class Bullet {
    public:
        Bullet(float startx, float starty);
        void update();
        float getx() const;
        float gety() const;

        

    private: 
        sf::RectangleShape shape; 
        float x;
        float y;
        float speed;
        void createBullet(float x, float y);
};

#endif