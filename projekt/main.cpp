#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <list>

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
    void _wyswietl()
    {
        for(int i=0; i< n; i++)
        {
            cout << i << " - "
                 << osoby[i].imie << " "
                 << osoby[i].nazwisko << " " << " "
                 << osoby[i].plec << " "
                 << osoby[i].rokUr << " " << " "
                 << osoby[i].miejscowosc << endl;
        }
    }

    void wyswietl()
    {
        _wyswietl();

        cout << "wcisnij dowolny klawisz zeby kontynuowac";
        getch();
    }

    void sortuj()
    {
        int nr;
        cout << "1 - imie\n2 - nazwisko\n3 - plec\n4 - rok urodzenia\n5 - miejscowosc\n" << endl;
        cout << "Wybierz, po czym chcesz sortowac: ";
        cin >> nr;

        switch(nr)
        {
        case 1:
            //
            for (int i = 0; i < n-1; i++)
                for (int j = 0; j < n-i-1; j++)
                    if (osoby[j].imie[0] > osoby[j+1].imie[0])
                        swap(osoby[j], osoby[j+1]);

            //
            break;
        case 2:
            //
            for (int i = 0; i < n-1; i++)
                for (int j = 0; j < n-i-1; j++)
                    if (osoby[j].nazwisko[0] > osoby[j+1].nazwisko[0])
                        swap(osoby[j], osoby[j+1]);
            //
            break;
        case 3:
            //
            for (int i = 0; i < n-1; i++)
                for (int j = 0; j < n-i-1; j++)
                    if (osoby[j].plec > osoby[j+1].plec)
                        swap(osoby[j], osoby[j+1]);
            //
            break;
        case 4:
            //
            for (int i = 0; i < n-1; i++)
                for (int j = 0; j < n-i-1; j++)
                    if (osoby[j].rokUr > osoby[j+1].rokUr)
                        swap(osoby[j], osoby[j+1]);
            //
            break;
        case 5:
            //
            for (int i = 0; i < n-1; i++)
                for (int j = 0; j < n-i-1; j++)
                    if (osoby[j].miejscowosc[0] > osoby[j+1].miejscowosc[0])
                        swap(osoby[j], osoby[j+1]);
            //
            break;
        default:
            ;

        }
    }

    void dodajOsobe()
    {
        try
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
        catch(...)
        {
            cout<<"BLAD" << endl;
            cin.clear();
            getch();
        }
    }

    void usunOsobe()
    {
        // Pusta tablica
        if(!n)
        {
            cout << "Lista osob jest pusta." << endl;
            getch();
            return;
        }

        _wyswietl();

        int id, it = 0;
        osoba no[nMax];

        cout << "Wybierz numer osoby ktora chcesz usunac: ";
        cin >> id;

        if(id > n - 1)
        {
            cout << endl << "Nie ma osoby z takim numerem.";
            getch();

            return;
        }

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

        for(int i=0; i<n; i++)
        {
            f << osoby[i].imie << " "
              << osoby[i].nazwisko << " "
              << osoby[i].plec << " "
              << osoby[i].rokUr << " "
              << osoby[i].miejscowosc;

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
        system("cls");

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
