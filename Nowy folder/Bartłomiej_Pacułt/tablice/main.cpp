#include <iostream>
#include <cstdlib>

using namespace std;

const int rozmiar = 10;
int tablica[rozmiar] = {0, 2, 1, 3, 5, 2, 6, 1, 4, 5};

void SortowanieBabelkowe(int tab[]);
void SortowaniePrzezWybieranie(int tab[]);
void SortowaniePrzezPodstawianie(int tab[]);
void SortowanieSzybkie(int tab[], int odkad, int dokad);
void SortowaniePrzezScalanie(int tab[], int n);
void SortowanieKubelkowe(int t[], int n);

int WyszukiwanieBinarne(int tab[], int odkad, int dokad, int co);

void OdwrocTablice (int tab[]);
void WypiszTablice (int tab[]);
void LosoweWypelnienie (int tab[], int ilosc);

int main()
{
    //SortowanieBabelkowe(tablica);
    //SortowaniePrzezWybieranie(tablica);
    //SortowaniePrzezPodstawianie(tablica);
    //LosoweWypelnienie(tablica, rozmiar);
    //SortowaniePrzezWybieranie(tablica);
    //SortowanieSzybkie(tablica, 0, rozmiar - 1);
    //SortowaniePrzezScalanie(tablica, rozmiar);
    WypiszTablice(tablica);
    SortowanieKubelkowe(tablica, rozmiar);
    WypiszTablice(tablica);
    //cout << "Szukany element: 5" << endl;
    //cout << "Znaleziony element: " << WyszukiwanieBinarne(tablica, 0, rozmiar-1, 5) << endl;

    return 0;
}

void SortowanieBabelkowe (int tab[])
{
    cout << "Sortowanie babelkowe: ";

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

    WypiszTablice(tab);
}

void SortowaniePrzezWybieranie (int tab[])
{
    cout << "Sortowanie przez wybieranie: ";

    for(int i = 0; i < rozmiar; i++)
    {
        for(int j = i; j < rozmiar; j++)
        {
            if(tab[i] > tab[j])
            {
                int tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }

    WypiszTablice(tab);
}

void SortowaniePrzezPodstawianie (int tab[])
{
    cout << "Sortowanie przez podstawianie: ";

    for(int i = rozmiar - 1; i >= 0; i--)
    {
        int pm;
        int ew = tab[i];

        for(pm = i; pm < rozmiar - 1; pm++)
        {
            if (tab[pm + 1] > ew) break;
            tab[pm] = tab[pm + 1];
        }

        tab[pm] = ew;
    }

    WypiszTablice(tab);
}

void SortowanieSzybkie (int tab[], int odkad, int dokad)
{
    if(dokad - odkad <= 0) return;

    //podzia³ tablicy wzglêdem pierwszego elementu
    int pp = odkad;

    for(int i = odkad; i <= dokad; i++)
    {
        if(tab[i] < tab[odkad])
        {
            swap(tab[i], tab[pp + 1]);
            pp++;
        }
    }

    swap(tab[odkad], tab[pp]);

    SortowanieSzybkie(tab, odkad, pp - 1);
    SortowanieSzybkie(tab, pp + 1, dokad);
}

void SortowaniePrzezScalanie (int t[], int n)
{
    if(n < 2) return;

    int n1 = n / 2;
    int n2 = n - n1;

    int *t1 = new int[n1];
    int *t2 = new int[n2];

    int i = 0;

    for(int i1 = 0; i1 < n1; i1++, i++)
    {
        t1[i1] = t[i];
    }

    for(int i2 = 0; i2 < n2; i2++, i++)
    {
        t2[i2] = t[i];
    }

    SortowaniePrzezScalanie(t1, n1);
    SortowaniePrzezScalanie(t2, n2);

    int i1 = 0;
    int i2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(i1 == n1)
        {
            t[i] = t2[i2];
            i2++;
            continue;
        }

        if(i2 == n2)
        {
            t[i] = t1[i1];
            i1++;
            continue;
        }

        if(t1[i1] < t2[i2])
        {
            t[i] = t1[i1];
            i1++;
        }
        else
        {
            t[i] = t2[i2];
            i2++;
        }
    }

}

void SortowanieKubelkowe(int t[], int n)
{
    int kubelki[10];

    for(int i = 0; i < 10; i++)
    {
        kubelki[i] = 0;
    }

    for(int i = 0; i < rozmiar; i++)
    {
        kubelki[t[i]]++;
    }

    int j = 0;
    for(int i = 0; i < 10; i++)
    {
        while(kubelki[i] > 0)
        {
            kubelki[i]--;
            t[j] = i;
            j++;
        }
    }
}

// Nie dziala
int WyszukiwanieBinarne (int t[], int odkad, int dokad, int co)
{
    if(odkad > dokad) return -1;

    int srodek = (odkad + dokad) / 2;

    if(t[srodek] == co)
    {
        return t[srodek];
    }

    if (co < t[srodek])
    {
        WyszukiwanieBinarne(t, odkad, srodek-1, co);
    }
    else
    {
        WyszukiwanieBinarne(t, odkad, srodek+1, co);
    }
}

void OdwrocTablice (int tab[])
{
    for(int i = 0; i < rozmiar / 2; i++)
    {
        int tmp = tab[i];
        tab[i] = tab[rozmiar - i - 1];
        tab[rozmiar - i - 1] = tmp;
    }

    WypiszTablice(tab);
}

void WypiszTablice (int tab[])
{
    for(int i = 0; i < rozmiar; i++)
        cout << tab[i] << (i < rozmiar - 1 ? ", " : "");

    cout << endl;
}

void LosoweWypelnienie (int tab[], int ilosc)
{
    for(int i = 0; i < rozmiar; i++)
    {
        tab[i] = rand() % 100;
    }

    cout << endl;
}
