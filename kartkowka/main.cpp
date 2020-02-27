#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    // ZADANIE 1
    struct element
    {
        int wartosc;
        element *nastepny;
    };

    element *s = NULL;

    element *e1 = NULL;
    e1 = new element;
    *e1 = {1, NULL};
    e1->nastepny = s;
    s = e1;

    element *e2 = NULL;
    e2 = new element;
    *e2 = {2, NULL};
    e2->nastepny = s;
    s = e2;

    element *e3 = NULL;
    e3 = new element;
    *e3 = {3, NULL};
    e3->nastepny = s;
    s = e3;

    // ZADANIE 2
    s = s->nastepny;

    while (s != NULL)
    {
        cout << s->wartosc << " ";
        s = s->nastepny;
    }
    cout << endl
         << endl;

    // ZADANIE 3
    string napis = "Limanowa to nie wies, Limanowa to nie kontynent, Limanowa to miasto";
    cout << napis << endl;

    string usun = "to";
    int rozmiar = usun.size();
    int index = napis.find(usun, 0);

    while (index != -1)
    {
        napis.erase(index, rozmiar);
        index = napis.find(usun, 0);
    }
    cout << napis << endl;

    // ZADANIE 4
    string slowo = "Limanowa";
    string zastap = "Warszawa";
    int rozmiar1 = slowo.size();
    int index1 = napis.find(slowo, 0);

    while (index1 != -1)
    {
        napis.erase(index1, rozmiar1);
        napis.replace(index1, 0, zastap);
        index1 = napis.find(slowo, 0);
    }
    cout << napis << endl;

    return 0;
}
