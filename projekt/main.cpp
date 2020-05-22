#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

class osoba
{
public:
    char imie[25];
    char nazwisko[25];
    char plec;
    int rokUr;
    char miejscowosc[25];
};

class daneOsobowe
{
public:
    const static int nMax=100;
    osoba osoby[nMax];
    char nazwaPliku[25];
    int n=0; //liczba osob w tablicy

    daneOsobowe(char nazwaPliku[])
    {
        strcpy(this->nazwaPliku, nazwaPliku);
        fstream f;
        f.open(nazwaPliku, ios_base::in);
        while(!f.eof())
        {
            f >> osoby[n].imie;
            f >> osoby[n].nazwisko;
            f >> osoby[n].plec;
            f >> osoby[n].rokUr;
            f.getline(osoby[n].miejscowosc, 25);
            n++;
        }
    }

    void wyswietl()
    {
        system("cls");
        for(int i=0; i< n; i++)
        {
            cout << i << " " << osoby[i].imie << " " << osoby[i].nazwisko << " ";
            cout  << " " << osoby[i].plec << " " << osoby[i].rokUr << " ";
            cout  << " " << osoby[i].miejscowosc << endl;
        }
        cout << "wcisnij dowolny klawisz zeby kontynuowac";
        getch();
    }

    void sortuj()
    {
        cout << osoby[1].imie << endl;
        getch();
    }

    void dodajOsobe()
    {
        osoba nowaOsoba;
        cout << "Imie: ";
        cin >> nowaOsoba.imie;
        cout << "Nazwisko: ";
        cin >> nowaOsoba.nazwisko;
        cout << "Plec: ";
        cin >> nowaOsoba.plec;
        cout << "Rok urodzenia: ";
        cin >> nowaOsoba.rokUr;
        cout << "miejscowosc: ";
        cin >> nowaOsoba.miejscowosc;

        osoby[n] = nowaOsoba;
        n++;
    }

    void usunOsobe()
    {
        for(int i=0; i< n; i++)
        {
            cout << i << " - " << osoby[i].imie << " " << osoby[i].nazwisko << " ";
            cout  << " " << osoby[i].plec << " " << osoby[i].rokUr << " ";
            cout  << " " << osoby[i].miejscowosc << endl;
        }
        int id, it = 0;
        osoba no[nMax];
        cout << "Ktora osobe chcesz usunac? ";
        cin >> id;
        for(int i=0; i<n; i++)
        {
            if(id == i)
                continue;

            no[it] = osoby[i];
            it++;
        }
        n--;
        for(int i=0; i<n; i++)
        {
            osoby[i] = no[i];
        }
    }

    void zapisz()
    {
        fstream f;
        f.open(nazwaPliku, ios_base::out);
        for(int i=0; i< n; i++)
        {
            f << osoby[i].imie << " " << osoby[i].nazwisko << " " << osoby[i].plec << " " << osoby[i].rokUr << " " << osoby[i].miejscowosc;
            if(i < n - 1)
                f << endl;
        }
        f.close();
    }

    int menu()
    {
        int i;
        system("cls");
        cout << "0 - koniec" << endl;
        cout << "1 - wyswietl" << endl;
        cout << "2 - sortuj" << endl;
        cout << "3 - dodaj osobe" << endl;
        cout << "4 - usun osobe" << endl;
        cout << "5 - zapisz" << endl;
        cout << endl << "wybierz: ";
        cin >> i;

        switch(i)
        {
        case 1:
            wyswietl();
            break;
        case 2:
            sortuj();
            break;
        case 3:
            dodajOsobe();
            break;
        case 4:
            usunOsobe();
            break;
        case 5:
            zapisz();
            break;
        default:
            ;
        }

        return i;
    }
};


int main()
{

    daneOsobowe dosob("plik.txt");

    while(dosob.menu()!=0);



    return 0;
}
