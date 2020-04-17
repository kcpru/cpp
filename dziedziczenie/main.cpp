#include <iostream>

using namespace std;

class Prostokat
{
public:
    int a,b;

    Prostokat(int a, int b)
    {
        this->a=a;
        this->b=b;
    }

    int pole(void)
    {
        return a * b;
    }

    int obwod(void)
    {
        return 2 * (a,b);
    }

    void info(void)
    {
        cout << "Prostokat: a=" << a << " b=" << b << " pole=" << pole() << " obwod= " << obwod() << endl;;
    }
};

class Prostopadloscian : public Prostokat
{
public:
    int h;

    Prostopadloscian(int a,int b,int h): Prostokat(a,b)
    {
        this->h=h;
    }

    int pole(void)
    {
        return Prostokat::pole() + obwod() * h;
    }

    int objetosc(void)
    {
        return Prostokat::pole() * h;
    }

    void info(void)
    {
        cout << "Prostopadloscian: a=" << a << " b=" << b << " h=" << h<<  " pole=" << pole() << " objetosc= " << objetosc() <<endl;
    }
};

int main()
{
    Prostokat p(1,1);
    p.info();


    Prostopadloscian pr(1,2, 4);
    pr.info();

    return 0;
}
