#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// ODSZUKAJ SLOWO -> ZASTAP
void szukajZastap(string &s, string szukaj, string zastap)
{
    int index = s.find(szukaj, 0);
    int rozmiar = szukaj.size();

    s.erase(index, rozmiar-1); // ZMIENIA STRING
    s.replace(index, 1, zastap);
}

void szukajUsun(string &s, string usun)
{
    int index = s.find(usun, 0); // ZWRACA INDEX
    int rozmiar = usun.size();

    s.erase(index, rozmiar);
}

void dodajNaKoniec(string &s, string napis)
{
    s += napis;
}

void dodajNaPoczatek(string &s, string napis)
{
    s = napis + s;
}

void usunWszystkie(string &s, string usun) {
    int rozmiar = usun.size();
    int index = s.find(usun, 0);

    while(index != -1){
        s.erase(index, rozmiar);
        index = s.find(usun, 0);
    }
}

string szukajIwypisz(string &s, string szukaj)
{
    int index = s.find(szukaj, 0);
    if(index == -1)
        return "Nie znaleziono";

    int rozmiar = szukaj.size();

    string szukane = s.substr(index, rozmiar); // ZWRACA WYCIETY NAPIS

    return szukane;
}

int main()
{
    string s1;
    s1 = "Limanowa to male miasto";
    cout << s1.find(" ", 9) << endl;
    cout << s1[0] << endl; // STRING JAK TABLICA

    // DODAWANIE LANCUCHÓW
    string s2 = " i co z tego";
    s1 += s2;
    cout << s1 << endl;

    szukajZastap(s1, "miasto", "metropolium");
    cout << s1 << endl;

    szukajUsun(s1, "male ");
    cout << s1 << endl;

    dodajNaKoniec(s1, " kolego");
    cout << s1 << endl;

    string s3 = szukajIwypisz(s1, "I tak nie zdasz");
    cout << s3 << endl;

    //
    string s4 = "Limanowa to nie miasto, Limanowa to rondo w budowie";
    usunWszystkie(s4, "Limanowa");
    cout << s4 << endl;

    return 0;
}
