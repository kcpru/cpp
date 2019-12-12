#include <iostream>

using namespace std;

//ZMIANA WARTOŒCI ZMIENNYCH PRZEKAZYWANYCH DO FUNKCJI JAKO PARAMETR
//&
//PRZEKAZYWANIE TABLIC DO FUNKCJI

//wywołując te funkcję z argumentem będącym nazwa zmiennej np. b
//wyobrażamy sobie że po wywołaniu zwieksz(b) zostanie wykonana operacja
//zwieksz(int &a = b)
//stworzona wiec zostanie zmienna a bêd¹ca inn¹ nazw¹ albo referencj¹ do
//zmiennej b

void zwieksz (int &a)
{
    a++;
}

//w starym C nie ma referencji
//aby w funkcji zmieniaæ wartoœæ zmiennej spoza funkcji nale¿y przekazaæ
//do funkcji wskaŸnik do niej
//funkcje nale¿y wywo³aæ z arugmentem bêd¹cym adresem do zmiennej.
//wyobra¿amy sobie ¿e po wywo³aniu zwieksz(&a) zostanie wykonana operacja

void zwieksz (int *w)
{
    (*w)++;
}

int a = 0;
int b = 20;

//nazwa tablicy w c++ jest wskaźnikiem do jej pierwszego elementu
//należy więc zrobić parametr będącym wskaźnikiem do typu składowanego w tablicy
//i podstawić do niego wskaźnik do jej pierwszego elementu

//funkcję wywołujemy przykładowo tak: print(tab[0], 5)
//i wyobrażamy sobie że po jej wywołaniu jest wykonywane
//print(int *t = tab[0], int n = 5)
//po takim podstawieniu, t stanie się wskaźnikiem do pierwszego elementu tablicy
//i może być traktowany jak jej nazwa

int tab[] = { 1, 2, 3, 4, 5};

void print (int *t, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << t[i] << (i != n - 1 ? ", " : "");
    }

    cout << endl;
}

//nowszym sposobem jest deklaracja tablicy
//w nieco inny sposób. wykorzystując, że deklaracje naśladują wyrażenia napiszemy
//w nagłówku int t[]
//rozumiemy przez to że typu int jest to co powstanie po zadziałaniu nawiasów na t
//czyli np. t[1] jest typu int
//z tego wynika że t jest wskaźnikiem do pierwszego elementu tablicy
//jest to odpowiednik nagłówek

void newPrint (int t[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << t[i] << (i != n - 1 ? ", " : "");
    }

    cout << endl;
}

int main()
{
    zwieksz(b);
    cout << b << endl;

    zwieksz(&a);
    cout << a << endl;

    print(&tab[0], 5);
    newPrint(tab, 5);

    return 0;
}
