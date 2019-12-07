#include <iostream>

using namespace std;

class Prostokat
{
public:
    int a, b;

    Prostokat(int a, int _b)
    {
        this->a = a; // ODNOSI SI� DO NAJBLI�SZEJ ZMIENNEJ
        b = _b;
    }

    int pole()
    {
        return a * b;
    }
    int obwod()
    {
        return 2 * (a + b);
    }

    void info()
    {

        cout << "Prostokat: a=" << a << ", b=" << b << endl;
        cout << "Pole: " << pole() << endl;
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
        cout << "Kolo: r=" << r << endl;
        cout << "Pole: " << pole() << endl;
    }
};

int main()
{
    Prostokat p1(5, 10);
    Prostokat p2(5, 10);

    p1.info();
    p2.info();

    Kolo k1;
    k1.r = 4;
    k1.info();

    return 0;
}
