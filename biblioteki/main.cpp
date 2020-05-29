#include <iostream>
#include "moja_biblioteka.cpp"

using namespace std;

int main()
{
    cout << suma(2,34) << endl;

    DwieLiczby dl(3,4);
    cout << dl.suma() << endl;

    TrzyLiczby tl(5,5,6);
    cout << tl.suma() << endl;

    return 0;
}
