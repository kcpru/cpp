#include <iostream>

using namespace std;


class Punkt2d
{
public:
    int x,y;
    Punkt2d(int _x, int _y)
    {
        x= _x;
        y=_y;
    }

    void info(void)
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class Punkt3d : Punkt2d
{
public:
    int z;
    Punkt3d(int _x, int _y, int _z): Punkt2d(_x, _y)
    {
        z= _z;
    }

    void info(void)
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main()
{
    Punkt2d p2d1(1,2), p2d2(3,4), p2d3(0,0);
    p2d1.info();
    p2d2.info();
    p2d3.info();

    p2d3 = p2d1;
    p2d3.info();

    p2d2 = p2d3;
    p2d2.info();


    Punkt3d p3d1(1,2,3), p3d2(3,4,5), p3d3(0,0,0);
    p3d1.info();
    p3d2.info();
    p3d3.info();

    return 0;
}
