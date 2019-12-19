#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Tablica
{
public:
    int rozmiar = 0;
    int *t;

    Tablica(int rozmiar)
        : rozmiar(rozmiar)
    {
        t = new int[rozmiar];
        cout << "Tablica utworzona" << endl << endl;
    }

    void losuj()
    {
        srand(time(NULL)); // JESZCZE BARDZIEJ RANDOMOWO

        for(int i=0; i<rozmiar; i++)
            t[i] = rand() % 100;
    }

    int maxi()
    {
        int maxi = t[0];
        for(int i=0; i<rozmiar; i++)
            if(t[i] > maxi)
                maxi = t[i];

        return maxi;
    }

    int mini()
    {
        int mini = t[0];
        for(int i=0; i<rozmiar; i++)
            if(t[i] < mini)
                mini = t[i];

        return mini;
    }

    int suma()
    {
        int suma = 0;
        for(int i=0; i<rozmiar; i++)
            suma += t[i];

        return suma;
    }

    int srednia()
    {
        int sumaElem = suma();
        float srednia = float(sumaElem) / rozmiar;
        return srednia;
    }

    void sortuj() // SORTOWANIE BABELKOWE
    {
        for(int i=0; i<rozmiar - 1; i++)
            for(int j=0; j<rozmiar - i - 1; j++)
                if(t[j] > t[j+1])
                    swap(t[j], t[j+1]);
    }

    void wyswietl()
    {
        for(int i=0; i<rozmiar; i++)
            cout << t[i] << " ";
        cout << endl;
    }

    // DESTRUKTOR BEZ PARAMETROW
    ~Tablica()
    {
        delete[] t;
        cout << endl << "Tablica usunieta" << endl;
    }
};

int main()
{
    Tablica Tab(20);

    Tab.wyswietl();

    Tab.losuj();
    Tab.wyswietl();
    cout << "Max: " << Tab.maxi() << endl;
    cout << "Min: " << Tab.mini() << endl;
    cout << "Suma: " << Tab.suma() << endl;
    cout << "Srednia: " << Tab.srednia() << endl;
    Tab.sortuj();
    Tab.wyswietl();

    return 0;
}
