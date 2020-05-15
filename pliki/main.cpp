#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    fstream f;
    f.open("./plik.txt", ios_base::out);

    f << "Jan lis limanowa" << endl;
    f << "Janina lisek laskowa" << endl;
    f << "Janusz lisowski lososina" << endl;

    f.close();

    return 0;
}
