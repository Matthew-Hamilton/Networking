#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>
#include <thread>


#include "Vector2.h"
#include "Player.h"

int main(void)
{
    std::cout << "Gets Here" << std::endl;
    sf::RenderWindow window(sf::VideoMode(800,600), "Networking ICA : T7056216");
    std::cout << "Window Set Up" << std::endl;


    Player One(sf::Color::Blue, {0,0});
    std::cout << "Character Set Up" << std::endl;


    std::cout << "Character Drawn For The First Time" << std::endl;
    window.draw(One.getIcon());

    // Getting the input and moving
    while (window.isOpen())
    {

        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            default:
                break;
            }
        }

        std::cout << "Checking Keys Pressed" << std::endl;
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                position = Vector2(-20, -20) + position;
            }
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                position = Vector2(-20, 20) + position;
            }
            else
            {
                position = Vector2(-20, 0) + position;
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                position = Vector2(20, -20) + position;
            }
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                position = Vector2(20,20) + position;
            }
            else
            {
                position = Vector2(20, 0) + position;
            }
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            position = Vector2(0, -20) + position;
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            position = Vector2(0, 20) + position;
        std::cout << "Key Check Finished" << std::endl;
        character.setPosition(position.m_X, position.m_Y);

        std::cout << "Clearing Window" << std::endl;
        window.clear();

        window.draw(character);
        std::cout << "Character Drawn" << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        // Displaying
        window.display();
    }
    return(0);
}
