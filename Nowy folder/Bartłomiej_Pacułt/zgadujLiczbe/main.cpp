#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int wylosowana = rand() % 100 + 1;
    int zgadywana = wylosowana - 1;
    int iloscZgadywan = 0;

    cout << "Zgadnij jaka liczba zostala wylosowana! (0 - 100)" << endl << endl;

    do
    {
        cout << "Podaj liczbe: ";
        cin >> zgadywana;

        iloscZgadywan++;

        if(zgadywana > wylosowana)
        {
            cout << "Za duzo" << endl << endl;
            continue;
        }
        else if (zgadywana < wylosowana)
        {
            cout << "Za malo" << endl << endl;
            continue;
        }
        else
        {
            cout << "Brawo! Wylosowana liczba to = " << wylosowana << ". Ilosc prob: " << iloscZgadywan << endl;
            break;
        }
    } while(true);

    return 0;
}
