#include <iostream>

using namespace std;

// STRUKTURY SA TYPAMI DANYCH UZYTKOWYCH GTROMADZACYMI WIELE INNYCH TYPÓW

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
    // DEKLARACJA ZMIENNEJ TYPU OSOBA Z INIZJALIZACJI
    osoba o1 = {"Jan", "Lis", 23, 'm'};
    // NOTACJA KROPKOWA
    cout << o1.imie << " " << o1.nazwisko << endl;
    cout << o1.wiek << " " << o1.plec << endl;

    //---- PODSTAWIANIE STRUKTUR ----
    // PODCZAS PODSTAWIANIA SA PODSTAWIANE ODPOWIADAJACE SOBIE
    // POLA STRUKTUR
    osoba o2;
    o2 = {"Imie", "Nazwisko", 27, 'k'};
    print(o2);

    // ---------------------------
    // PODOBNIE JAK PROSTE ZMIENNE STRUKTRY MOZNA TWORZYC
    // DYNAMICZNIE ZA POMOCA NEW
    osoba *o3;
    o3 = new osoba;
    // DO STRUKTUR TWORZONYCH DYNAMICZNIE MOZNA SIE ODNOSIC UZYWAJAC "*"
    *o3 = o1;
    cout << (*o3).imie << " " << (*o3).nazwisko << endl;
    cout << o3 -> imie << " " << o3 -> nazwisko << endl;

    // ODNOSZ¥C SIÊ DO PÓL STRUKTURY MO¯NA KOEZYSTAÆ
    // BEZPOSREDNIO ZE WSKAZNIKA I STRZA£KI

    return 0;
}
