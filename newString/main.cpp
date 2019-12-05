#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int i = 100;

// ODSZUKAJ S£OWO: ZAST¥PIÆ
void szukajZastap(string &s, string szukaj, string zastap)
{
    int index = s.find(szukaj, 0);
    int rozmiar = szukaj.size();

    s.erase(index, rozmiar - 1);
    s.replace(index, 1, zastap);
}


int main()
{
    string s1;
    s1 = "Limanowa to male miasto";
    cout << s1.substr(12, 4) << endl; // ZWRACA WYCIETY NAPIS
    cout << s1.erase(12, 4) << endl; // ZMIENIA STRING
    cout << s1 << endl;
    cout << s1.replace(12, 1, "male ") << endl;

    cout << s1.find(" ", 9)<<endl; // ZWRACA INDEX
    cout << s1[0] << endl;

    // DODAWANIE £AÑCUCHÓW
    string s2 = " i co z tego";
    s1 = s1 + s2;
    cout << s1 <<endl;

    szukajZastap(s1, "miasto", "metropolium");
    cout << s1 <<endl;


    return 0;
}
