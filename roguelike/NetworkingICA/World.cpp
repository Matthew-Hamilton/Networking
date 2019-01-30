#include "World.h"

World::World(int num)
{
    m_Wall.setSize({19,19});
    m_Wall.setFillColor(sf::Color::Black);
    m_Wall.setOutlineThickness(0.5);
    m_Wall.setOutlineColor(sf::Color::White);
    m_Floor.setSize({19,19});
    m_Floor.setFillColor(sf::Color::Red);
    m_Floor.setOutlineThickness(0.5);
    m_Floor.setOutlineColor(sf::Color::White);
}

void World::SetFloorColour(sf::Color colour)
{
    m_Floor.setFillColor(colour);
}

void World::SetWallColour(sf::Color colour)
{
    m_Wall.setFillColor(colour);
}




void World::GenMap(bool Border)
{
    if(Border)
    {
        for(int i{0}; i < m_Height; i++)
            {
                for(int j{0}; j < m_Width; j++)
                    {
                        if(i == 0 || i == m_Height -1 ||j == 0 || j == m_Width -1)
                        {
                            m_Map[i][j] = "W";
                        }
                        else
                        {
                            m_Map[i][j] = "-";
                        }
                    }
            }
    }
}


/*
void World::OutMap()
{
    std::string to_Output;
    for(int i{0}; i < m_Height; i++)
        {
            to_Output = "";
            to_Output += "|";
            for(int j{0}; j < m_Width; j++)
                {
                    to_Output += m_Map[j][i] + "|";
                }
            to_Output += "\n";
            std::cout << to_Output << std::endl;
        }

}
*/

void World::Draw(sf::RenderWindow &window)
{
    for(int i{0}; i < m_Height; i++)
        {
            for(int j{0}; j < m_Width; j++)
                {
                    if(m_Map[i][j] == "W")
                    {
                        m_Wall.setPosition({20 * j, 20 * i});
                        window.draw(m_Wall);
                    }
                    else if(m_Map[i][j] == "-")
                    {
                        m_Floor.setPosition({20 * j, 20 * i});
                        window.draw(m_Floor);
                    }
                }
        }

}

World::~World()
{
    //dtor
}
