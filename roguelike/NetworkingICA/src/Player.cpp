#include "Player.h"

Player::Player(sf::Color MainColour, Vector2 Position, sf::Color BorderColour)
{
    m_PlayerIcon.setRadius(9);
    m_PlayerIcon.setFillColor(MainColour)
    m_PlayerIcon.setOutlineThickness(1);
    m_PlayerIcon.setOutlineColor(BorderColour);
    m_Position = Position;
}

Player::~Player()
{
    //dtor
}
