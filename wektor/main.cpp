#include <iostream>

using namespace std;

class Wektor
{
public:
    int x, y;

    Wektor(int x, int y)
    {
        this->x=x;
        this->y=y;
    }

    void print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // operatorOP(argument)
    Wektor operator+(Wektor w)
    {
        Wektor tmp(this->x + w.x, this->y + w.y);
        return tmp;
    }

    Wektor operator-(Wektor w)
    {
        Wektor tmp(this->x - w.x, this->y - w.y);
        return tmp;
    }

    Wektor operator*(int num)
    {
        Wektor tmp(this->x * num, this->y * num);
        return tmp;
    }
    Wektor operator/(int num)
    {
        Wektor tmp(this->x / num, this->y / num);
        return tmp;
    }
};

Wektor operator*(int num, Wektor w) {
    Wektor tmp(w.x * num, w.y * num);
    return tmp;
}



int main()
{
    Wektor w1(-3,4);
    w1.print();

    Wektor w2(5,1);
    w2.print();

    Wektor w3(0,0);
    w3 = w1 + w2;
    w3.print();

    Wektor w4(0,0);
    w4 = w2 - w3;
    w4.print();

    Wektor w5(0,0);
    w5 = w4 * 4;
    w5.print();

    Wektor w6(0,0);
    w6 = 3 * w1;
    w6.print();

    return 0;
}
