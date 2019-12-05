#include <iostream>

using namespace std;

class Prostokat
{
public:
    int a, b;

    int pole()
    {
        return a * b;
    }
    int obwod()
    {
        return 2*(a+b);
    }

    void info()
    {

        cout << "Prostokat: a="<< a << ", b="<< b <<endl;
        cout << "Pole: " << pole() <<endl;
    }
};

class Kolo
{
    int PI = 3.14;

public:
    int r;

    int pole()
    {
        return r * r * PI;
    }

    void info()
    {
        cout << "Kolo: r="<< r <<endl;
        cout << "Pole: " << pole() <<endl;
    }
};

int main()
{
    Prostokat p1;
    Prostokat p2;
    p1.a = 5;
    p1.b = 7;

    p2.a = 3;
    p2.b = 9;

    p1.info();
    p2.info();


    Kolo k1;
    k1.r = 4;
    k1.info();

    return 0;
}
