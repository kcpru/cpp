#include <iostream>
#include <string>

using namespace std;

class Czas
{
public:
    int g;
    int m;

    Czas()
    {
        g = m = 0;
    }

    void zwiekszGodziny(int oIleG)
    {
        g = (g + oIleG) % 24;
    }

    void zwiekszMinuty(int oIleM)
    {
        zwiekszGodziny((m + oIleM) / 60);
        m = (m + oIleM) % 60;
    }

    void info()
    {
        if(m < 10)
            cout << g << ":" << "0" << m << endl;
        else
            cout << g << ":" << m << endl;
    }

    void edytor()
    {
        char co;
        int oIle;

        while(true)
        {
            cout << "Co chcesz zwiekszyc? (g/m) ";
            cin >> co;
            cout << "O ile? ";
            cin >> oIle;
            if(co == 'm')
                zwiekszMinuty(oIle);
            else if(co == 'g')
                zwiekszGodziny(oIle);
            else
                break;

            info();
        }

    }
};

int main()
{
    Czas t1;
    t1.zwiekszGodziny(53);
    t1.zwiekszMinuty(3695);
    t1.info();
    t1.edytor();
    return 0;
}
