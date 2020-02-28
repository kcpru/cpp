#include <iostream>

using namespace std;

class Tablica
{
public:
    int *t;
    int rozmiar;

    Tablica(int rozmiar)
    {
        this->rozmiar = rozmiar;
    }

    void wypelnijKolejnymi()
    {
        for(int i=0; i < rozmiar; i++)
            t[i] = i + 1;
    }

    void info()
    {
        cout << "[ ";

        for(int i=0; i < rozmiar; i++)
            cout << t[i] << " ";

        cout << "]" << endl;
    }

    int operator[] (int i)
    {
        return t[i];
    }

    /*
    Tablica operator= (Tablica _t)
    {
        int _rozmiar = _t.rozmiar;
        Tablica new_t(_rozmiar);

        for(int i=0; i < rozmiar; i++)
            new_t[i] = 3;

        return new_t;
    }
    */
};

int main()
{
    Tablica t1(10);
    t1.wypelnijKolejnymi();
    t1.info();

    cout << t1[3] << endl;

    return 0;
}
