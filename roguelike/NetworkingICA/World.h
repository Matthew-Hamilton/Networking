#ifndef WORLD_H
#define WORLD_H
#include "Map.h"
#include <SFML/Graphics.hpp>


class World
{
    public:
        World(int num);

        void SetFloorColour(sf::Color colour);
        void SetWallColour(sf::Color colour);

        void Draw(sf::RenderWindow &window);

        void GenMap(bool border = true);
        //void OutMap();

        ~World();

    private:
        int m_Width{40};
        int m_Height{30};
        std::string m_Map[30][40];

        sf::RectangleShape m_Floor;
        sf::RectangleShape m_Wall;

};

#endif // WORLD_H
