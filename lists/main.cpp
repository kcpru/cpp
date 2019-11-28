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

void usunPierwszy(element *&start){
    if(start==NULL) return;
    element *e;
    e=start;
    start= start->nastepny;
    delete e;
}

void print(element *start)
{
    element *e =start;
    while(e!=NULL){
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
    dodajNaPoczatek(s,e);

    e=new element;
    *e = {2, NULL};
    dodajNaPoczatek(s,e);

    e=new element;
    *e = {3, NULL};
    dodajNaPoczatek(s,e);

    usunPierwszy(s);

    print(s);

    return 0;
}
