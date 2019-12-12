#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char t1[100] = "Ala ma kota.";
char t2[100] = "Przykladowe zdanie.";
char t3[100];

/**
  * Prints given array of chars.
  * @param Array to print.
  */
void print (char t[])
{
    int i = 0;
    while(t[i] != NULL)
    {
        cout << t[i];
        i++;
    }

    cout << endl;
}

int strLength (char t[])
{
    int i = 0;
    while(t[i] != NULL)
    {
        i++;
    }

    return i;
}

void cpy (char from[], char to[])
{
    for(int i = 0; i < strlen(from); i++)
    {
        to[i] = from[i];
    }
}

int main()
{
    cpy("Jakis napis do skopiowania", t3);
    print(t3);
    cpy("Limanowa to male miasto", t1);

    cout << strstr(t1, "to") << endl;

    return 0;
}
