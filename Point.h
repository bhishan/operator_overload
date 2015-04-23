#include<iostream>

using namespace std;

class Point{

    private:
        int X;
        int Y;
    public:
        Point();
        Point(int,int);
        int getX();
        int getY();
        void setX(int);
        void setY(int);
        void setXY(int, int);
        void print();
        Point operator+(Point)const;
};
