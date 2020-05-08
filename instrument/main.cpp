#include <iostream>

using namespace std;

class Instrument
{
public:
    virtual void grajJedenDzwiek(void) = 0;

    void graj(int ileDzwiekow)
    {
        for(int i =0; i<ileDzwiekow; i++)
            grajJedenDzwiek();
    }
};

class Trabka : public Instrument
{
public:
    void grajJedenDzwiek(void)
    {
        cout << "Tru-tu-tu ";;
    }
};

int main()
{
    Trabka t;
    t.graj(5);
    return 0;
}
