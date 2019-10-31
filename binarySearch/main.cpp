#include <iostream>

using namespace std;

int t[10] = {1,2,3,4,5,6,7,8,9,10};

// FUNKCJA ZWRACA POZYCJE SZUKANEJ WARTOŒCI W TABLICY LUB -1 JE¯ELI TAKA W TABLICY WYSTÊPUJE
int binarySearch(int t[], int odkad, int dokad, int czego){
    if(odkad>dokad) return -1;

    int srodek = (odkad+dokad)/2;

    if(t[srodek]==czego){
        return srodek;
    }
    if(t[srodek]>czego) binarySearch(t, odkad, srodek-1, czego);
    else binarySearch(t, srodek+1, dokad,  czego);
}

int main(){
    for(int i=0; i<10;i++){cout << t[i] <<" ";}cout<<endl;
 cout << binarySearch(t, 0,10,3);
    return 0;
}
