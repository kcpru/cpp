#include <iostream>

using namespace std;

const int n = 10;
int t[n] = {4,3,6,8,7,9,0,1,2,5};

void print(int t[], int n)
{
    for(int i=0; i<n; i++) cout << t[i] << " ";
    cout << endl;
}

void selectionSort(int t[], int n)
{

    for (int i=0; i<n; i++)
    {
        int mini = i;
        for (int j=i; j<n; j++) if(t[mini] > t[j]) mini = j;
        swap(t[i], t[mini]);
    }
}

int main()
{
    print(t, n);

    selectionSort(t, n);
    print(t, n);
    return 0;
}
