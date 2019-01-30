#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>
#include <thread>

#include "World.h"
#include "Vector2.h"
#include "Player.h"

int main(void)
{
    std::cout << "Gets Here" << std::endl;
    sf::RenderWindow window(sf::VideoMode(800,600), "Networking ICA : T7056216");
    std::cout << "Window Set Up" << std::endl;


    std::cout << "Setting Up World" << std::endl;
    World testWorld(0);
    std::cout << "Generating Map" << std::endl;
    testWorld.GenMap(true);
    std::cout << "First Drawing of World" << std::endl;
    testWorld.Draw(window);

    Player One(sf::Color::Blue, {80,80});
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
                One.Move(7);
            }
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                One.Move(1);
            }
            else
            {
                One.Move(4);
            }
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                One.Move(9);
            }
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                One.Move(3);
            }
            else
            {
                One.Move(6);
            }
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            One.Move(8);
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            One.Move(2);
        std::cout << "Key Check Finished" << std::endl;

        std::cout << "Clearing Window" << std::endl;
        window.clear();
        testWorld.Draw(window);
        window.draw(One.getIcon());
        std::cout << "Character Drawn" << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        // Displaying
        window.display();
    }
    return(0);
}
