#ifndef MAP_H
#define MAP_H
#include "Vector2.h"
#include<string>


class Map
{
    public:
        Map(int Width = 40, int Height = 30);
        ~Map();

        void GenMap(bool border = true);
        void OutMap();

    private:
        int m_Width;
        int m_Height;
        std::string m_Map[40][30];
};

#endif // MAP_H
