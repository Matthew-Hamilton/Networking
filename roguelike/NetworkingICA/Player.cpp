#include "Player.h"

Player::Player(sf::Color MainColour, Vector2 Position, sf::Color BorderColour)
{
    m_PlayerIcon.setRadius(9);
    m_PlayerIcon.setFillColor(MainColour);
    m_PlayerIcon.setOutlineThickness(1);
    m_PlayerIcon.setOutlineColor(BorderColour);
    m_PlayerIcon.setPosition(Position.m_X, Position.m_Y);
    m_Position = Position;
}

void Player::Move(int Direction)
{
    switch(Direction)
    {
    case 2:
        m_Position = Vector2(0, 20) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    case 8:
        m_Position = Vector2(0, -20) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    case 3:
        m_Position = Vector2(20, 20) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    case 9:
        m_Position = Vector2(20, -20) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    case 1:
        m_Position = Vector2(-20, 20) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    case 7:
        m_Position = Vector2(-20, -20) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    case 6:
        m_Position = Vector2(20, 0) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    case 4:
        m_Position = Vector2(-20, 0) + m_Position;
        m_PlayerIcon.setPosition(m_Position.m_X, m_Position.m_Y);
        break;

    default:
        break;
    }
}

Player::~Player()
{
    //dtor
}
