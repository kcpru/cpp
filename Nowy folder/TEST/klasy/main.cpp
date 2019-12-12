#include <iostream>

using namespace std;

class Car
{
    public:
        float engineCapacity = 0.95;
        string brand;
        string model;

    Car(float cap, string br, string mod)
    {
        engineCapacity = cap;
        brand = br;
        model = mod;
    }

    public:
        void Debug ()
        {
            cout << engineCapacity << endl;
            cout << brand << endl;
            cout << model << endl;
        }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
