#include <iostream>

using namespace std;

const int rozmiar = 4;

int tab [rozmiar][rozmiar] = {};

/*
int tab [rozmiar][rozmiar] =
{
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
};
*/

void WypiszTablice ()
{
    for(int i = 0; i < rozmiar; i++)
    {
        cout << endl << "tablica " << i << " = { ";
        for(int j = 0; j < rozmiar; j++)
        {
            cout.width(2);
            cout << tab[i][j] << (j == rozmiar - 1 ? "" : ", ");
        }
        cout << " }";
    }

    cout << endl;
}

void Wypelnienie1 ()
{
    int liczba = 1;
    for(int i = 0; i < rozmiar; i++)
    {
        for(int j = 0; j < rozmiar; j++)
        {
            tab[i][j] = liczba;
            liczba++;
        }
    }
}

void Wypelnienie2 ()
{
    int liczba = 1;
    for(int i = 0; i < rozmiar; i++)
    {
        for(int j = rozmiar - 1; j >= 0; j--)
        {
            tab[i][j] = liczba;
            liczba++;
        }
    }
}

void Wypelnienie3 ()
{
    int liczba = 1;
    for(int i = 0; i < rozmiar; i++)
    {
        for(int j = 0; j < rozmiar; j++)
        {
            tab[j][i] = liczba;
            liczba++;
        }
    }
}

void Wypelnienie4 ()
{
    int liczba = 1;

    for(int i = 0; i < rozmiar; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < rozmiar; j++)
            {
                tab[i][j] = liczba;
                liczba++;
            }
        }
        else
        {
            for(int k = rozmiar - 1; k >= 0; k--)
            {
                tab[i][k] = liczba;
                liczba++;
            }
        }
    }
}

void Wypelnienie5 ()
{
    int wierszOd = 0;
    int wierszDo = rozmiar - 1;
    int kolumnaOd = 0;
    int kolumnaDo = rozmiar - 1;
    int liczba = 1;

    while(true)
    {
        for(int k = kolumnaOd; k <= kolumnaDo; k++)
        {
            tab[wierszOd][k] = liczba;
            liczba++;
        }

        if(liczba >= rozmiar * rozmiar)
            break;

        wierszOd++;

        for(int w = wierszOd; w <= wierszDo; w++)
        {
            tab[w][kolumnaDo] = liczba;
            liczba++;
        }

        if(liczba >= rozmiar * rozmiar)
            break;

        kolumnaDo--;

        for(int k = kolumnaDo; k <= kolumnaOd; k--)
        {
            tab[wierszDo][k] = liczba;
            liczba++;
        }

        if(liczba >= rozmiar * rozmiar)
            break;

        wierszDo--;

        for(int w = wierszOd; w >= wierszOd; w--)
        {
            tab[w][kolumnaOd] = liczba;
            liczba++;
        }

        if(liczba >= rozmiar * rozmiar)
            break;

        kolumnaOd++;
    }
}

int main ()
{
    Wypelnienie3();
    WypiszTablice();

    return 0;
}

