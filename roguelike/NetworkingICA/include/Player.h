#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include "../Vector2.h"


class Player
{
    public:
        Player(sf::Color MainColour, Vector2 position, sf::Color BorderColour = sf::Color::White);

        ~Player();

        sf::CircleShape getIcon(){return m_PlayerIcon;};


    private:
        Vector2 m_Position;
        sf::CircleShape m_PlayerIcon;

};

#endif // PLAYER_H
