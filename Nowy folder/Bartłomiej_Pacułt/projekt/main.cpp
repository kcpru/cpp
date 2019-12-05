#include <iostream>

using namespace std;

int wynik = 1;

void silnia (int n)
{
    if (n == 0)
    {
        cout << wynik;
        return;
    }

    wynik *= n;
    silnia(n - 1);
}

int silniaL (int n)
{
    if(n == 0)
    {
        return 1;
    }

    return silniaL(n - 1) * n;
}

void potega (int a, int b)
{
    if(b == 0)
    {
        cout << wynik;
        return;
    }

    wynik *= a;
    potega(a, b - 1);
}

int potegaL (int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    return a *= potegaL(a, b - 1);
}

void wypiszLiczby (int a, int b)
{
    if(a == b + 1)
    {
        cout << endl;
        return;
    }

    cout << a << " ";
    wypiszLiczby(a + 1, b);
}

void rysPlotek (int n)
{
    if(n == 0) return;

    cout << "|";
    rysPlotek(n - 1);
}

int main()
{
    cout << silniaL(6) << endl;
    return 0;
}
