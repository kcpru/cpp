#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int iloczyn(int a, int b)
{
    return a + b;
}

int suma(int a, int b, int c)
{
    return a + b + c;
}

string suma (string s1, string s2)
{
    return s1 + s2;
}

int main()
{
    cout << suma(1,2) << endl;
    cout << suma(3,4,5) << endl;
    cout << suma("hop","siup") << endl;
    return 0;
}
