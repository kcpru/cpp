#include <iostream>

using namespace std;

// STRUKTURY S¥ TYPAMI DANYCH U¯YTKOWYCH GTROMADZ¥CYMI WIELE INNYCH TYPÓW

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    char plec;
};

void print(osoba o)
{
    cout << o.imie << " " << o.nazwisko << endl;
    cout << o.wiek << " " << o.plec << endl;
}

int main()
{
    // DEKLARACJA ZMIENNEJ TYPU OSOBA Z INIZJALIZACJ¥
    osoba o1 = {"Jan", "Lis", 23, 'm'};
    // NOTACJA KROPKOWA
    cout << o1.imie << " " << o1.nazwisko << endl;
    cout << o1.wiek << " " << o1.plec << endl;

    //---- PODSTAWIANIE STRUKTUR ----
    // PODCZAS PODSTAWIANIA S¥ PODSTAWIANE ODPOWIADAJ¥CE SOBIE
    // POLA STRUKTUR
    osoba o2;
    o2 = {"Kacperu", "Chodok", 2, 'k'};
    print(o2);

    // ---------------------------
    // PODOBNIE JAK PROSTE ZMIENNE STRUKTRY MO¯NA TWORZYÆ
    // DYNAMICZNIE ZA POMOC¥ NEW
    osoba *o3;
    o3 = new osoba;
    // DO STRUKTUR TWORZONYCH DYNAMICZNIE MO¯NA SIÊ ODNOSIÆ
    // U¯YWAJ¥C *
    *o3 = o1;
    cout << (*o3).imie << " " << (*o3).nazwisko << endl;
    cout << o3 -> imie << " " << o3 -> nazwisko << endl;

    // ODNOSZ¥C SIÊ DO PÓL STRUKTURY MO¯NA KOEZYSTAÆ
    // BEZPOŒREDNIO ZE WSKANIKA I STRZA£KI

    return 0;
}
