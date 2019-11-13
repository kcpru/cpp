#include <iostream>

using namespace std;

const int n = 10;
int t[n] = {2,8,3,9,4,0,5,6,1,7};

void print(int t[], int n)
{
    for(int i=0; i<n; i++)cout<<t[i] << " ";
    cout<<endl;
}

void insertionSort(int t[],int n)
{
    int k, key, ptr;
    for (k = 1; k < n; k++)
    {
        key = t[k];
        ptr = k - 1;
        while (ptr >= 0 && t[ptr] > key)
        {
            t[ptr + 1] = t[ptr];
            ptr = ptr - 1;
        }
        t[ptr + 1] = key;
    }
}

int main()
{
    print(t, n);

    insertionSort(t,n);
    print(t, n);

    return 0;
}
