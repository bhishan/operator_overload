
#include "Point.h"

Point::Point()
{
    setXY(0,0);
}

Point::Point(int x, int y)
{
    setXY(x, y);
}

int Point::getX()
{
    return X;
}

int Point::getY()
{
    return Y;
}

void Point::setX(int x)
{
    X = x;
}

void Point::setY(int y)
{
    Y = y;
}

void Point::setXY(int x, int y)
{
    setX(x);
    setY(y);
}

void Point::print()
{
    cout<<"("<< X << "," << Y << ")";
}

Point Point::operator+(Point b)const
{
         Point point;
         point.X = this->X + b.X;
         point.Y = this->Y + b.Y;
         return point;
}
