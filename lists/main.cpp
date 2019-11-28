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
    print(s);

    return 0;
}
