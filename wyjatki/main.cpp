#include <iostream>

using namespace std;

int dziel(int a, int b)
{
    if(b==0)
    {
        string wyjatek = "Blad dzielenia przez zero";
        throw wyjatek;
    }
    return a/b;
}

int main()
{
    int a,b;

    cout << "Program oblicza wynik a przez b" << endl;


    while(true)
    {
        try
        {
            cout << "Podaj a i b: ";
            cin >> a;
            cin >> b;

            cout << "a/b= " << dziel(a,b);
            break;
        }
        catch (string e)
        {
            cout << e << endl;
        }
    }

    return 0;
}
