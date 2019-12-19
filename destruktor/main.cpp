#include <iostream>
#include <cstdlib>

using namespace std;

class Tablica
{
public:
    int rozmiar;
    int *t;

    Tablica(int rozmiar, int t[])
        : rozmiar(rozmiar)
        , t(t)
    {
        t = new int[rozmiar];
    }

    int losuj()
    {
        for(int i=0; i<rozmiar; i++)
        {
            t[i] = rand() % 100;
        }
    }

    void wyswietl()
    {
        for(int i=0; i<rozmiar; i++)
        {
            cout << t[i] << " ";
        }
        cout << endl;
    }

    // DESTRUKTOR BEZ PARAMETROW
    ~Tablica()
    {
        delete[] t;
    }
};



int main()
{
    cout << "Hello world!" << endl;
    int t[10] = {};
    Tablica Tab1(10, t);

    Tab1.losuj();
    Tab1.wyswietl();

    return 0;
}
