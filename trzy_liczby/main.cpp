#include <iostream>

using namespace std;

class TrzyLiczby
{
public:
    int a, b, c;

    TrzyLiczby(int a,int b,int c)
    {
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }

    float srednia ()
    {
        float wynik = (a + b + c) / 3.0;
        return wynik;
    }

    float suma()
    {
        float wynik = a + b + c;
        return wynik;
    }

    int srodkowa()
    {
        int srodkowa;
        if( b>a && a>c || c>a && a>b )
            srodkowa = a;

        if( a>b && b>c || c>b && b>a )
            srodkowa = b;

        if( a>c && c>b || b>c && c>a )
            srodkowa = c;

        return srodkowa;
    }

    int max()
    {
        int max = a;
        if (b>max)
            max = b;
        if(c>max)
            max = c;

        return max;
    }

    int min()
    {
        int min = a;
        if (b<min)
            min = b;
        if(c<min)
            min = c;

        return min;
    }

    void info()
    {
        cout << "(" << a << ", " << b<< ", " << c << ")" << endl;
        cout << "Srednia: " << srednia() << endl;
        cout << "Suma: " << suma() << endl;
        cout << "Srodkowa: " << srodkowa() << endl;
        cout << "Max: " << max() << endl;
        cout << "Min: " << min() << endl;
    }
};



class Kolo
{
public:
    int r;
    const float PI;

    Kolo(int _r): r(_r), PI(3.14)
    {
        r = _r;
    }

    float obwod()
    {
        float wynik = 2 * r * PI;
        return wynik;
    }

    float pole()
    {
        float wynik = r * r * PI;
        return wynik;
    }

    void info()
    {
        cout << "Promien: " << r << endl;
        cout << "Obwod: " << obwod() << endl;
        cout << "Pole: " << pole() << endl;
    }
};

class Czas
{
public:
    int g, m;

    Czas(int g, int m)
    {
        this->g=g;
        this->m=m;
    }

    int _zwiekszGodziny(int oIleG)
    {
        return (g + oIleG) % 24;
    }

    void zwiekszGodziny(int oIleG)
    {
        g = _zwiekszGodziny(oIleG);
    }

    int _zwiekszMinuty(int oIleM)
    {
        return (m + oIleM) % 60;
    }

    void zwiekszMinuty(int oIleM)
    {
        zwiekszGodziny((m + oIleM) / 60);
        m = _zwiekszMinuty(oIleM);
    }

    void info()
    {
        if(m < 10)
            cout << g << ":" << "0" << m << endl;
        else
            cout << g << ":" << m << endl;
    }
};


int main()
{
    TrzyLiczby liczba(-7,3,-1);
    liczba.info();

    Kolo kolo(9);
    kolo.info();

    Czas czas(4, 5);
    czas.info();

    return 0;
}
