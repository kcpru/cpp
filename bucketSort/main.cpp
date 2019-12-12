#include <iostream>

using namespace std;

const int n = 20;
int t[n] = {2, 8, 3, 0, 7, 8, 5, 2, 1, 7, 2, 8, 3, 0, 8, 8, 5, 2, 1, 9};

void print(int t[], int n)
{
    for (int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << endl;
}

void bucketSort(int t[], int n)
{
    int t2[n] = {0}; // PRZYJMUJEMY ZE ILOSC ELEMENTOW JEST ROWNA NAJWIEKSZEJ LICZBIE W TABLICY

    for (int i = 0; i < n; i++)
        t2[t[i]] += 1;

    int k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < t2[i]; j++)
            t[k++] = i;
}

int main()
{
    print(t, n);

    bucketSort(t, n);
    print(t, n);

    return 0;
}
