#include <iostream>
#include <windows.h>

using namespace std;

void Dzielenie(int a, int b);
void Mnozenie(int a, int b);
void Potega(int a, int b);
void LiczbyParzyste(int ile);
void Silnia(int a);
void Fibonacci(int a);
void NWD(int a, int b);
void Grid(int height, int width);
void PolPiramidy(int width);
void Piramida(int width);
void SiatkaLiczb(int x, int y);

int main()
{
    Dzielenie(33, 5);
    Mnozenie(5, 60);
    Potega(2, 14);
    LiczbyParzyste(12);
    Silnia(5);
    Fibonacci(19);
    NWD(48, 24);
    Grid(10, 70);
    PolPiramidy(10);
    Piramida(60);
    SiatkaLiczb(10, 9);

    return 0;
}

void Dzielenie (int a, int b)
{
    int wynik = 0;

    cout << a;

    for(int i = 0; i < a; i++)
    {
        wynik++;
        a-=b;
    }

    cout << " / " << b << " = " << wynik << " r" << a << endl;
}

void Mnozenie (int a, int b)
{
    int wynik = 0;

    for(int i = 0; i < b; i++)
    {
        wynik += a;
    }

    cout << a << " * " << b << " = " << wynik << endl;
}

void Potega (int a, int b)
{
    int wynik = 1;

    for(int i = 0; i < b; i++)
    {
        wynik *= a;
    }

    cout << a << "^" << b << " = " << wynik << endl;
}

void LiczbyParzyste (int ile)
{
    for(int i = 2; i <= ile * 2; i += 2)
    {
        cout << i << ", ";
    }
    cout << endl;
}

void Silnia (int a)
{
    int wynik = 1;

    for(int i = 1; i <= a; i++)
    {
        wynik *= i;
    }

    cout << "Silnia z " << a << " = " << wynik << endl;
}

void Fibonacci (int a)
{
    long long l1 = 0, l2 = 1, l3;

    for(int i = 0; i < a; i++)
    {
        l3 = l2;
        l2 += l1;
        l1 = l3;
    }

    cout << a << ". liczba w ciagu Fibonacciego to " << l1 << endl;
}

void NWD (int a, int b)
{
    int r = 0;

    cout << "NWD z " << a << " i " << b << " = ";

    for(; (r = a % b) > 0;)
    {
        a = b;
        b = r;
    }

    cout << b << endl;
}

void Grid (int height, int width)
{
    cout << endl;

    for(int y = 0; y < height; y++)
    {
        for(int x = 0; x < width; x++)
        {
            cout << "X";
        }

        cout << endl;
    }
}

void PolPiramidy(int width)
{
    cout << endl;

    for(int i = 0; i <= width; i++)
    {
        for(int y = 0; y < i; y++)
        {
            cout.width(2);
            cout << width - y;
        }
        cout << endl;
    }

    cout << endl;

    for(int i = width; i >= 0; i--)
    {
        for(int y = 0; y < i; y++)
        {
            cout.width(2);
            cout << y;
        }
        cout << endl;
    }

}

void Piramida(int width)
{
    cout << endl;
    width /= 2;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for(int i = 1, x = width; i <= width; i++, x--)
    {
        for(int a = 0; a < x - 1; a++)
        {
            cout << " ";
        }
        SetConsoleTextAttribute(hConsole, 70);
        for(int b = 0; b < i * 2; b++)
        {
            cout << " ";
        }
        SetConsoleTextAttribute(hConsole, 7);
        cout << endl;
    }

    SetConsoleTextAttribute(hConsole, 7);
}

void SiatkaLiczb (int x, int y)
{
    int liczba = 1;

    cout << endl;

    for(int a = 0; a < y; a++)
    {
        for(int b = 0; b < x; b++)
        {
            cout.width(3);
            cout << liczba;
            liczba++;
        }

        cout << endl;
    }
}
