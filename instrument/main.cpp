#include <iostream>

using namespace std;

class Instrument
{
public:
    virtual void grajJedenDzwiek(void) = 0;

    void graj(int ileDzwiekow)
    {
        for(int i =0; i<ileDzwiekow; i++)
            grajJedenDzwiek();
        cout << endl;
    }
};

class Trabka : public Instrument
{
public:
    void grajJedenDzwiek(void)
    {
        cout << "Tru-tu-tu ";
    }
};

class Beben : public Instrument
{
public:
    void grajJedenDzwiek(void)
    {
        cout << "Bum-bum ";
    }
};

class Zwierze
{
public:
    virtual void jedenDzwiek(void)
    {
        cout<< "Ko-ko ";
    };

    void dajGlos(int ileDzwiekow)
    {
        for(int i =0; i<ileDzwiekow; i++)
            jedenDzwiek();
        cout << endl;
    }
};

class Pies : public Zwierze // Nie chodzi o marszalka
{
public:
    void jedenDzwiek(void)
    {
        cout << "Hau-hau ";
    }
};

class Kon : public Zwierze {}; // <= dziedziczy "Ko-ko", bo nie jest nadpisana

int main()
{
    Trabka t;
    t.graj(5);

    Beben b;
    b.graj(5);

    Pies p;
    p.dajGlos(5);

    Kon k;
    k.dajGlos(5);

    return 0;
}
