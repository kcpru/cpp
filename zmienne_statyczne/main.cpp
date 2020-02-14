#include <iostream>

using namespace std;

class Math
{
public:
    static const float pi;

    static float square(float a)
    {
        return a * a;
    }
};

class Kukulka
{
public:
    int kukniecTejKukulki;

    // ZMIENNE STATIC ISTNIEJE ZANIM ZOSTANIE UTWORZONY JAKIKOLWIEK OBIEKT KLASY KUKULKA
    static int kukniecWszystkichKukulek;
    void
};

static float pi = 3.14;

int main()
{
    cout << pi << endl;
    cout << Math::square(5) << endl;

    return 0;
}
