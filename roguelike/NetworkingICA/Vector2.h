#pragma once


class Vector2
{
    public:
        Vector2();
        Vector2(float x, float y);
        ~Vector2();

		float length();
		Vector2 normalise();
        friend bool operator==(const Vector2& lhs, const Vector2& rhs);
        friend bool operator!=(const Vector2& lhs, const Vector2& rhs);

        float m_X{0};
        float m_Y{0};
};

inline Vector2 operator+(Vector2 lhs, Vector2 &rhs)
{
	lhs.m_X = lhs.m_X + rhs.m_X;
	lhs.m_Y = lhs.m_Y + rhs.m_Y;
    return lhs;
}

inline Vector2 operator/(Vector2 lhs, float &rhs)
{
	Vector2 toReturn(lhs.m_X * rhs, lhs.m_Y *rhs);
	return toReturn;
}

inline Vector2 operator*(float lhs, Vector2 &rhs)
{
	Vector2 toReturn(rhs.m_X * lhs, rhs.m_Y *lhs);
    return toReturn;
}

inline bool operator==(const Vector2& lhs, const Vector2& rhs)
{
    if(lhs.m_X == rhs.m_X && lhs.m_Y == rhs.m_Y)
    {
        return true;
    }
    return false;
}

inline bool operator!=(const Vector2& lhs, const Vector2& rhs)
{
    if(lhs.m_X != rhs.m_X || lhs.m_Y != rhs.m_Y)
    {
        return true;
    }
    return false;
}
