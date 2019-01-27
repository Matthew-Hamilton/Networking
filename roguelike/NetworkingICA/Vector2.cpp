#include "Vector2.h"
#include <math.h>

Vector2::Vector2()
{
    //ctor
}

Vector2::Vector2(float x, float y): m_X(x), m_Y(y)
{

}

Vector2::~Vector2()
{
    //dtor
}

float Vector2::length()
{
	float toReturn = sqrtf(m_X * m_X + m_Y * m_Y);
	return toReturn;
}

Vector2 Vector2::normalise()
{
	Vector2 toReturn;
	toReturn.m_X = m_X / length();
	toReturn.m_Y = m_Y / length();
	return toReturn;
}
