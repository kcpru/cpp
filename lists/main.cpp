#include <iostream>
#include <bitset>

using namespace std;

struct element
{
    int wartosc;
    element *nastepny;
};

void dodajNaPoczatek(element *&start, element *e)
{
    e -> nastepny=start;
    start=e;
}

void usunPierwszy(element *&start)
{
    if(start==NULL)
        return;
    element *e;
    e=start;
    start= start->nastepny;
    delete e;
}

void dodajNaKoniec(element *&start, element *e)
{
    e->nastepny=NULL;
    if(start==NULL)
    {
        start = e;
        return;
    }

    element *ostatni = start;

    while(ostatni->nastepny!=NULL)
    {
        ostatni=ostatni->nastepny;
    }

    ostatni -> nastepny = e;
}

void usunOstatni()
{

}

void print(element *start)
{
    element *e =start;
    while(e!=NULL)
    {
        cout << e->wartosc << " ";
        e = e-> nastepny;
    }
    cout<< endl;
}


int main()
{
    element *s = NULL;
    element *e=NULL;

    e=new element;
    *e = {1, NULL};
    dodajNaPoczatek(s,e);   // 1

    e=new element;
    *e = {2, NULL};
    dodajNaPoczatek(s,e);   // 2, 1

    e=new element;
    *e = {3, NULL};
    dodajNaPoczatek(s,e);   // 3, 2, 1

    e=new element;
    *e = {2019, NULL};
    dodajNaKoniec(s,e);     // 3, 2, 1, 2019

    usunPierwszy(s);        // 2, 1, 2019

    print(s);

    return 0;
}
