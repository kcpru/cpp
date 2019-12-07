#include <iostream>

using namespace std;

int main()
{
    const int n = 6;
    int tab[n] = {0, 8, 2, 4, 6, 10};

    int mini = tab[0];

    for(int i = 1; i < n; i++)
    {
        if(tab[i] < mini)
            mini = tab[i];
    }

    cout << mini << endl;

    return 0;
}
