#include <iostream>

using namespace std;

const int n = 10;
int t[n] = {9,0,8,5,6,4,1,2,3,7};

void quicksort(int t[], int od, int dok){
    int pp = od;
    if(od>=dok) return;

    for(int i=od; i<dok; i++){
        if(t[i] < t[od]){
            swap(t[i], t[pp+1]);
            pp++;
        }
    }
    swap(t[od], t[pp]);
    quicksort(t, od, pp);
    quicksort(t, pp+1, dok);
}

void print(int t[], int n){
    for(int i=0; i<n; i++) cout << t[i] << " ";
    cout << endl;
}

int main()
{
    quicksort(t, 0,n);
    print(t, n);
    return 0;
}
