#include <iostream>
#include <string>

using namespace std;

class Czas
{
public:
    int g, m;

    Czas(int g, int m)
    {
        this->g=g;
        this->m=m;
    }

    int _zwiekszGodziny(int oIleG)
    {
        return (g + oIleG) % 24;
    }

    void zwiekszGodziny(int oIleG)
    {
        g = _zwiekszGodziny(oIleG);
    }

    int _zwiekszMinuty(int oIleM)
    {
        return (m + oIleM) % 60;
    }

    void zwiekszMinuty(int oIleM)
    {
        zwiekszGodziny((m + oIleM) / 60);
        m = _zwiekszMinuty(oIleM);
    }

    Czas operator+(Czas c)
    {
        Czas tmp(this->g + c.g, this->m + c.m);
        return tmp;
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
    Czas t1(0,0);
    t1.zwiekszGodziny(53);
    t1.zwiekszMinuty(3695);
    t1.info();


    Czas t2(2,10);
    t1 = t1 + t2;
    t1.info();
    t1.edytor();

    return 0;
}
