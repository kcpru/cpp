#include <iostream>
#include <cstdlib>

using namespace std;

class Tablica
{
public:
    int rozmiar;
    int *t;
    Tablica(int rozmiar)
        : rozmiar(rozmiar)
    {
        t = new int[rozmiar];
    }

    void losuj()
    {
        for(int i=0; i<rozmiar; i++)
        {
            t[i] = rand() % 100;
        }
    }

    int maxi()
    {
        int maxi = t[0];

        for(int i=0; i<rozmiar; i++){
            if(t[i] > maxi) maxi = t[i];
        }

        return maxi;
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
    Tablica Tab1(10);

    Tab1.losuj();
    Tab1.wyswietl();
    cout << Tab1.maxi() << endl;

    return 0;
}
