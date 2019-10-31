#include <iostream>
#include <string.h>


using namespace std;

char t[] = {'A', 'p', 'p', 'l', 'e', NULL};

void myStrPrint(char t[])
{
    int i=0;
    while(t[i]!=NULL)
    {
        cout<< t[i];
        i++;
    }
}

int myStrLen(char t[])
{
    int i=0;
    while(t[i] !=NULL)
        i++;
    return i;
}

void myStrCopy(char dest[], char source[])
{
    for(int i=0; i<=strlen(source); i++)
        dest[i]=source[i];
}

int main()
{
    myStrPrint(t);

    cout << endl;
    char t2[100];
    myStrCopy(t2, t);
    myStrPrint(t2);
    cout << myStrLen(t2);
    char t3[100];
    cout<<endl;
    strcpy(t3, "Limanowa to male miasto");
    myStrPrint(t3);
    cout<< endl;
    cout<< (t3+9);
    cout<< endl;
    cout<< strstr(t3, "male");

    return 0;
}
