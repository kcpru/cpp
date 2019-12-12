#include <iostream>

using namespace std;

class Czas
{
public:
    int g;
    int m;

    Czas()
    {
        g = m = 0; // GMO -> hehe
    }

    void zwiekszGodziny(int oIleG)
    {
        g = (g + iIleG)%24;
    }

    void info()
    {
        cout << g << ":" << m << endl;
    }
};

int main()
{
    Czas t1;
    t1.zwiekszGodziny(40);
    t1.info();
    return 0;
}
