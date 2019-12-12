#include <iostream>

using namespace std;

int main()
{
    //wskazniki
    int a = 3;
    int b = 4;
    int *wi;

    wi = &a;

    cout << "a = " << *wi << endl;
    *wi = 8;
    cout << "a = " << a << endl;

    wi = &b;

    cout << "b = " << *wi << endl;
    (*wi)++;
    cout << "b = " << b << endl;

    wi = new int;
    *wi = 92;
    cout << *wi << endl;
    cout << "adres wi = " << wi << endl;

    delete wi;

    cout << endl << endl;

    //zmienne dynamiczne
    int *wsk;
    wsk = new int;
    *wsk = 293;

    cout << *wsk << endl << endl;

    delete wsk;

    //dynamiczne tworzenie tablicy
    int *t;
    t = new int[10];

    for(int i = 0; i < 10; i++)
    {
        t[i] = i + 1;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << t[i] << (i != 9 ? ", " : "");
    }

    delete[] t;

    //zmienne referencyjne
    int d = 7;
    int &e = d; //referencja

    cout << "&d = " << &d << endl;
    cout << "&e = " << &e << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    return 0;
}
