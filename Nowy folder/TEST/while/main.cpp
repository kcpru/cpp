#include <iostream>

using namespace std;

int IloczynAB (int a, int b)
{
    int wynik = 0;
    int iloscDodawan = 0;

    while(iloscDodawan < b)
    {
        wynik += a;
        iloscDodawan++;
    }

    return wynik;
}

void KolejneLiczbyParzyste(int startowa, int ile)
{
    if(startowa % 2 != 0) {
        startowa++;
    }

    for(int i = 0; i < ile ; i++)
    {
        cout << startowa << ", ";
        startowa+=2;
    }

    cout << endl << endl;
}

int NWD (int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    return a;
}

void Dzielenie (int a, int b)
{
    int wynik = 0;
    cout << a;
    while(a >= b)
    {
        wynik++;
        a-=b;
    }

    cout << " : " << b << " = " << wynik << " r" << a << endl << endl;
}

int Potegowanie(int a, int b)
{
    int wynik = 1;
    int iloscDzialan = 0;

    while(iloscDzialan < b)
    {
        wynik *= a;
        iloscDzialan++;
    }

    return wynik;
}

int Silnia (int a)
{
    int iloscDzialan = 1;
    int wynik = 1;

    while(iloscDzialan <= a)
    {
        wynik *= iloscDzialan;
        iloscDzialan++;
    }

    return wynik;
}

int CiagFibonnaciego (int ktoraWKoleji)
{
    long long l1 = 0, l2 = 1, l3;
    int i = 0;

    while(i < ktoraWKoleji)
    {
        l3 = l2;
        l2 += l1;
        l1 = l3;
        i++;
    }

    return l1;
}

void CiagFibonnaciegoWypisz (int ile)
{
    long long l1 = 0, l2 = 1, l3;
    int i = 0;

    while(i < ile)
    {
        l3 = l2;
        l2 += l1;
        l1 = l3;
        cout << l1 << ", ";
        i++;
    }

}

int main()
{
    cout << "NWD = " << NWD(12, 18) << endl << endl;                   //Najwiekszy Wspólny Dzielnik
    cout << "NWW = " << (24 / NWD(24, 36) * 36) << endl << endl;       //Najmniejsza Wspólna Wielokrotnosc
    cout << IloczynAB(4, 3) << endl << endl;                           //Mnozenie metoda wielokrotnego dodawania
    KolejneLiczbyParzyste(6,12);                                       //Wypisywanie kolejnych liczb parzystych od jakiejs liczby
    Dzielenie(25,7);                                                   //Dzielenie z reszta
    cout << Potegowanie(2, 10) << endl << endl;                        //Potegowanie
    cout << Silnia(5) << endl << endl;                                 //Silnia
    cout << CiagFibonnaciego(19) << endl << endl;                      //Wypisanie danej liczby z ciagu Fibonnaciego
    CiagFibonnaciegoWypisz(19);                                        //Wypisanie danej ilosci liczb z ciagu Fibonnaciego
    return 0;
}
