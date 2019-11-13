#include <iostream>

using namespace std;

const int n = 10;
int t[n] = {4,3,6,8,7,9,0,1,2,5};

void print(int t[], int n)
{
    for(int i=0; i<n; i++) cout << t[i] << " ";
    cout << endl;
}

void bubbleSort(int t[], int n)
{
    for (int i=0; i<n; i++)
        for(int j=i; j<n; j++) if(t[j] < t[i]) swap(t[i], t[j]);
}

int main()
{
    bubbleSort(t, n);
    print(t, n);
    return 0;
}
