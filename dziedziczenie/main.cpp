#include <iostream>

using namespace std;

class Prostokat
{
public:
    int a,b;

    Prostokat(int a, int b)
    {
        this->a=a;
        this->b=b;
    }

    int pole(void)
    {
        return a * b;
    }

    int obwod(void)
    {
        return 2 * (a,b);
    }

    void info(void)
    {
        cout << "Prostokat: a=" << a << " b=" << b << " pole=" << pole() << " obwod= " << obwod() << endl;
    }
};

int main()
{
    Prostokat p(1,1);
    p.info();


    return 0;
}
