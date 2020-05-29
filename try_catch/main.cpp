#include <iostream>
#include <limits>

using namespace std;

int wczytajInt()
{
    int x = 0;

    while(true)
    {
        try
        {
            cin >> x;
            break;
        }
        catch( exception & )
        {
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n');
            cout << "Postaraj sie bardziej: ";
        }

    }
    return x;
}

int main()
{
    cin.exceptions(ios::failbit | ios::badbit);

    cout << "Podaj liczbe nr 1: ";
    int a = wczytajInt();
    cout << "Podaj liczbe nr 2: ";
    int b = wczytajInt();
    cout << "Suma: " << a + b << '\n';


    return 0;
}
