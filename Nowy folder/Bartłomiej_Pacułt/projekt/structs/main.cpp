#include <iostream>

using namespace std;

struct Osoba
{
    string imie;
    string nazwisko;
    int wiek;
    char plec;
};

void printInfo (Osoba o)
{
    cout << "Imie: " << o.imie << endl;
    cout << "Nazwisko: " << o.nazwisko << endl;
    cout << "Wiek: " << o.wiek << endl;
    cout << "Plec: " << o.plec << endl;
}

struct Element
{
    int wartosc;
    Element *nastepny;
};

void dodajNaPoczatek (Element *&start, Element *e)
{
    e->nastepny = start;
    start = e;
}

void usunPierwszy (Element *&start)
{
    if(start == NULL) return;
    Element *e;
    e=start;
    start = start->nastepny;
    delete e;
}

void dodajNaKoniec (Element *&s, Element *ed)
{
    ed->nastepny = NULL;

    if(s == NULL)
    {
        s = ed;
        return;
    }

    Element *e = s;

    while(e->nastepny != NULL)
    {
        e = e->nastepny;
    }

    e->nastepny = ed;
}

void usunOstatni (Element *s)
{
    if(s == NULL) return;

    if(s->nastepny == NULL)
    {
        delete s;
        return;
    }

    Element *e = s;
    Element *ep = s;

    while(e->nastepny != NULL)
    {
        ep = e;
        e = e->nastepny;
    }

    ep->nastepny = NULL;
    delete e;
}

void print (Element *start)
{
    Element *e = start;

    while(e != NULL)
    {
        cout << e->wartosc << " ";
        e = e->nastepny;
    }
    cout << endl;
}

int main()
{
    Element *s = NULL;
    Element *e = NULL;

    e = new Element;
    *e = {1, NULL};

    dodajNaPoczatek(s, e);
    print(s);

    e = new Element;
    *e = {2, NULL};

    dodajNaPoczatek(s, e);
    print(s);

    e = new Element;
    *e = {3, NULL};

    dodajNaKoniec(s, e);
    print(s);

    usunOstatni(s);
    print(s);

    usunPierwszy(s);
    print(s);

    /*Osoba osoba1 = {"Jan", "Kowalski", 60, 'M'};
    printInfo(osoba1);
    cout << endl;

    Osoba *osoba2 = new Osoba;
    (*osoba2).imie = "Agnieszka";
    osoba2->nazwisko = "Nowak";
    (*osoba2).wiek = 34;
    osoba2->plec = 'K';
    //printInfo(*osoba2);
    return 0;*/
}
