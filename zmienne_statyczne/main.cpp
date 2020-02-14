#include <iostream>

using namespace std;

/**
* ELEMENTY STATYCZNE ISTNIEJA OD POCZATKU WYKONYWANIA PROGRAMU
* KONSEKWENCJA TEGO JEST ZE ISTNIEJA ZANIM ZOSTATNIE UTWORZONY OBIEKT
* ZAWIERAJACY STATYCZNE ELEMENTY
* MOZNA WIEC ICH UZYWAC BEZ TWORZENIA OBIEKTU
* W PRZYPADKU ZMINNYCH STATYCZNYCH SA ONE WSPOLNE DLA WSZYSTKICH
* OBIEKTOW TEJ KLASY
**/

class Math
{
public:
    static const float pi;

    static float square(float a)
    {
        return a * a;
    }
};

static float pi = 3.14;

//
class Kukulka
{
public:
    int kukniecTejKukulki;

    Kukulka()
    {
        kukniecTejKukulki = 0;
    }

    // ZMIENNE STATIC ISTNIEJE ZANIM ZOSTANIE UTWORZONY JAKIKLWIEK OBIEKT KLASY KUKULKA
    // CO ZATEM IDZIE NIE JEST ELEMENTEM UTWORZONYM DLA KONKTRETNEGO OBIEKTU I JEST WSPÓLNA DLA WSZYSTKICH OBIEKTÓW
    static int kukniecWszystkichKukulek;

    void kuknij()
    {
        cout << "ku-ku" << endl;

        kukniecTejKukulki++;
        kukniecWszystkichKukulek++;
    }
};

int Kukulka::kukniecWszystkichKukulek; // !!!!!!!!!!!!!!

int main()
{
    cout << pi << endl;
    cout << Math::square(5) << endl;

    Kukulka k1, k2, k3;

    k1.kuknij();
    k1.kuknij();

    k2.kuknij();

    k3.kuknij();
    k3.kuknij();
    k3.kuknij();

    cout << Kukulka::kukniecWszystkichKukulek << endl;

    cout << "k1: " << k1.kukniecTejKukulki<< endl;
    cout << "k2: " << k2.kukniecTejKukulki<< endl;
    cout << "k3: " << k3.kukniecTejKukulki<< endl;

    return 0;
}
