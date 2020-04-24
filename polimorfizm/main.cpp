#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int iloczyn(int a, int b)
{
    return a * b;
}

int suma(int a, int b, int c)
{
    return a + b + c;
}

string suma (string s1, string s2)
{
    return s1 + s2;
}

void call(int (*f)(int, int))
{
    cout << f(2,3) << endl;
}

int main()
{
    cout << suma(1,2) << endl;
    cout << suma(3,4,5) << endl;
    cout << suma("hop","siup") << endl;

    //
    int (*f)(int, int);

    f = suma;
    cout << f(2,3) << endl;

    f = iloczyn;
    cout << f(2,3) << endl;

    call(suma);
    call(iloczyn);

    return 0;
}
