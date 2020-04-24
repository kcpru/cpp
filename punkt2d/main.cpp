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

class Punkt3d : public Punkt2d
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


    Punkt3d p3d1(3,4,5);
    p3d1.info();

    p2d1 = p3d1; // Rzutowanie w gore jest DOZWOLONE
    p2d1.info();

    // p3d1 = p2d1; // Rzutowanie w dol na klase pochodna jest ZABRONIONE

    Punkt2d *wp2d = new Punkt2d(1,2);
    Punkt3d *wp3d = new Punkt3d(7,8,9);

    wp2d = wp3d;
    wp2d -> info();


    Punkt2d *wp2d2 = new Punkt2d(1,2);
    Punkt3d *wp3d2 = new Punkt3d(7,8,9);

    // wp3d2=wp2d2; // Standardowo nie DZIA£A
    wp3d2 = (Punkt3d*) wp2d2; // Mozna wymusic jawne rzutowanie...
    wp3d2 -> info(); // ...ale moze doprowadzic to nieprzewidywalnych efektow: Drukuje z ktorego nie ma


    return 0;
}
