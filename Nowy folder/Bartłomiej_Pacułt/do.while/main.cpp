#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void GetKey()
{
    char key = ' ';

    do
    {
        key = getch();
        cout << "key = " << key << " - Nacisnij ENTER aby zakonczyc" << endl;
    } while(key != 13);

    cout << endl;
}

float Pierwiastek (float liczba)
{
    float a = 1, b = liczba, srodek, kwadrat;

    do
    {
        srodek = (a + b) / 2;
        kwadrat = srodek * srodek;

        if(kwadrat > liczba)
            b = srodek;
        else
            a = srodek;

    } while(fabs(kwadrat - liczba) > 0.0001);

    return srodek;
}

int main()
{
    GetKey();
    cout << Pierwiastek(256) << endl;

    return 0;
}
