#include <iostream>

using namespace std;

/*
Funkcja to fragment programu opatrzony nazwa ktory moe zostac wykonany poprzez wywolanie
tej funkcji w kodzie
*/

int suma (int a, int b)
{
    int wynik = 0;
    wynik = a + b;
    return wynik;
}

int iloczyn (int a, int b)
{
    int wynik = 0;

    for(int i = 0; i < a; i++)
        wynik += b;

    return wynik;
}

int potega (int a, int b)
{
    int wynik = 1;

    for(int i = 0; i < b; i++)
        wynik *= a;

    return wynik;
}

int iloraz (int a, int b)
{
    int wynik = 0;

    while(a >= b)
    {
        wynik++;
        a -= b;
    }

    return wynik;
}

void func ()
{
    cout << "Hello, World!" << endl;
}

void wyswietl (int *w, int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
    {
        cout << w[i] << (i != rozmiar - 1 ? ", " : "");
    }

    cout << endl;
}

void sortowanie (int *tab, int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
    {
		for(int j = 1; j < rozmiar - i; j++)
        {
            if(tab[j - 1] > tab[j])
            {
                int tmp = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = tmp;
            }
        }
    }
}

int maximum (int *tab, int rozmiar)
{
    int maxi = tab[0];

    for(int i = 1; i < rozmiar; i++)
    {
        if(tab[i] > maxi)
            maxi = tab[i];
    }

    return maxi;
}

int minimum (int *tab, int rozmiar)
{
    int mini = tab[0];

    for(int i = 1; i < rozmiar; i++)
    {
        if(tab[i] < mini)
            mini = tab[i];
    }

    return mini;
}

int main ()
{
    const int n = 5;
    int tab[n] = { 5, 3, 1, 2, 4};

    cout << "przed posortowaniem: ";
    wyswietl(tab, n);

    cout << "po sortowaniu: ";
    sortowanie(tab, n);
    wyswietl(tab, n);

    cout << "maximum = " << maximum(tab, n) << endl;
    cout << "minimum = " << minimum(tab, n) << endl;

    return 0;
}
