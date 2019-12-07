#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char t1[100] = "Ala ma kota.";
char t2[100] = "Przykladowe zdanie.";
char t3[100] = "Limanowa to male miasto";

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

void rem (char t[], char word[])
{
    char right[100];
    char left[100];

    strcpy(right, strstr(t, word) + strlen(word));

    strcpy(left, t);
    *strstr(left, word) = NULL;

    strcpy(t, left);
    strcat(t, right);
}

int main()
{
    rem(t3, "male");
    cout << t3 << endl;

    return 0;
}
