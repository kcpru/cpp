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
        c.zwiekszGodziny(c.g);
        c.zwiekszMinuty(c.m);
        return c;
    }

    Czas operator++()
    {
        (*this).zwiekszMinuty(1);
        return *this;
    }

    void info()
    {
        if(m < 10)
            cout << g << ":" << "0" << m << endl;
        else
            cout << g << ":" << m << endl;
    }
};

ostream& operator<<(ostream &os, Czas c)
{
    cout << c.g << ":" << (c.m < 10 ? "0" : "") << c.m << endl;
    return os;
}

int main()
{
    Czas t1(0,0), t2(1,9);
    t1.zwiekszGodziny(53);
    t1.zwiekszMinuty(3695);
    t1.info();

    t1 = t1 + t2;

    cout << t1 << t2;

    ++t1;
    cout << t1;

    return 0;
}
