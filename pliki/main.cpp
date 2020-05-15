#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    fstream f;

    // Wpisywanie do pliku
    f.open("./plik.txt", ios_base::out);

    f << "Jan lis limanowa" << endl;
    f << "Janina lisek laskowa gorna" << endl;
    f << "Janusz lisowski lososina"; // Za ostatnim elementem nie ma prawa byc niczego

    f.close();

    // Czytanie z pliku
    f.open("./plik.txt", ios_base::in);

    char tekst[25];

    while(!f.eof()) // Dopoki nie ma konca pliku
    {

        f >> tekst;
        cout << "Imie: " << tekst << endl;
        f >> tekst;
        cout << "Nazwisko: " << tekst << endl;
        f.getline(tekst, 25);
        cout << "Miejscowosc: " << tekst << endl;
        cout << endl;
    }

    f.close();

    return 0;
}
