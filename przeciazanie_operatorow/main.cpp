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

    /** Definiowanie operatorów jednoargumentowych **/
    Wektor operator++() // PREFIX - PRZEDROSTEK
    {
        x++;
        y++;
        z++;

        return *this;
    }

    Wektor operator++(int p) // SUFIX
    {
        Wektor kopia(*this);

        x++;
        y++;
        z++;

        return kopia;
    }
};

Wektor operator*(int num, Wektor w)
{
    Wektor wynik(w);

    wynik.x *= num;
    wynik.y *= num;
    wynik.z *= num;

    return wynik;
}

ostream& operator<<(ostream &os, Wektor w)
{
    cout << "(" << w.x << ", " << w.y << ", " << w.z << ")" << endl;
    return os;
}

int main()
{
    Wektor w1(1,2,3), w2(4,5,6), w3(0,0,0), w4(0,0,1);

    cout << w1 << w2 << w3;
    w1++; w2++; w3++; w4++;

    cout << endl;
    cout << w1 << w2 << w3 << w4;

    return 0;
}
