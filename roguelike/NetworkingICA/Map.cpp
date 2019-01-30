#include "Map.h"
#include <iostream>
#include <string>
#include <sstream>

Map::Map(int Width, int Height):m_Width(Width), m_Height(Height)
{
}

void Map::GenMap(bool Border)
{
    if(Border)
    {
        for(int i{0}; i < m_Height; i++)
            {
                for(int j{0}; j < m_Width; j++)
                    {
                        if(i == 0 || i == m_Height -1 ||j == 0 || j == m_Width -1)
                        {
                            m_Map[j][i] = "W";
                        }
                        else
                        {
                            m_Map[j][i] = "-";
                        }
                    }
            }
    }
}
void Map::OutMap()
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

Map::~Map()
{
    //dtor
}
