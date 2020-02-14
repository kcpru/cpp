#include <iostream>

using namespace std;

/**
* Operatory dwuargumentowe
* ------------------------
*
* Konstrukcja obiekt1 OP obiekt1 jest zamieniana na obiekt1.operatorOP(obiekt2)
**/

class Wektor
{
public:
    int x, y, z;

    Wektor(int x, int y, int z)
    {
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }

    Wektor operator+(Wektor w)
    {
        Wektor wynik(w); // KOPIA

        wynik.x += x;
        wynik.y += y;
        wynik.z += z;

        return wynik;
    }

    Wektor operator*(int i)
    {
        Wektor wynik(*this);

        wynik.x *= i;
        wynik.y *= i;
        wynik.z *= i;

        return wynik;
    }

    void info()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

/**
* Operator moze byc rowniez definiowany poza klasa a oeracja obiekt1 OP obiekt2
* moze byc zamienona na wywolanie funkcji operatorOP(obiekt1, obiekt2)
**/

Wektor operator*(int num, Wektor w)
{
    Wektor wynik(w);

    wynik.x *= num;
    wynik.y *= num;
    wynik.z *= num;

    return wynik;
}

//
class Liczba
{
public:
    int wartosc;

    Liczba(int wartosc)
    {
        this -> wartosc = wartosc;
    }

    Liczba operator++(void)
    {
        wartosc += 1;
        return wartosc;
    }

    void info()
    {
        cout << wartosc << endl;;
    }
};

int main()
{
    Wektor w1(1,2,3), w2(4,5,6), w3(0,0,0);

    w3 = w1 + w2;
    w3.info();

    w3 = w3 * 2;
    w3.info();

    w3 = 2 * w3;
    w3.info();

    Liczba l1(1), l2(0);
    ++l1;
    l2 = ++l1;
    l1.info();
    l2.info();

    return 0;
}
