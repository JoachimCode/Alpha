#include <iostream>
#include "Player.h"
#include <vector>
#include "Bullet.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main() {
    // Window creation

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Square Shooter");
    
    // Check if the window was created successfully
    if (!window.isOpen()) {
        std::cerr << "Failed to create the window!" << std::endl;
        return -1;
    }

    return 0;
}