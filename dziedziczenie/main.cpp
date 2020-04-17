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
        cout << "Prostokat: a=" << a << " b=" << b << " pole=" << pole() << " obwod= " << obwod() << endl;
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

// ------------------ //
// ------ Ko³o ------ //
class Kolo {
public:
    int r;
    const float PI = 3.14;

    Kolo(int r) {
        this->r=r;
    }

    int pole(void) {
        return r * r * PI;
    }

    int obwod(void) {
        return 2 * PI * r;
    }

    void info(void) {
        cout << "Kolo: r=" << r << " pole=" << pole() << " obwod= " << obwod() << endl;
    }
};

class Walec : public Kolo {
public:
    int h;

    Walec(int r,int h): Kolo(r) {
        this->h=h;
    }

    int pole(void) {
        return Kolo::pole() * 2 + h * Kolo::obwod();
    }

    int objetosc(void) {
        return Kolo::pole() * h;
    }

    void info(void) {
        cout << "Walec: r=" << r <<  " h=" << h <<  " pole=" << pole() << " objetosc= " << objetosc() <<endl;
    }
};

int main()
{
    Prostokat p(1,1);
    p.info();


    Prostopadloscian pr(1,2, 4);
    pr.info();

    Kolo k(3);
    k.info();

    Walec w(3, 4);
    w.info();

    return 0;
}
