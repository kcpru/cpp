#include <iostream>

using namespace std;

class Czas
{
protected:
    int g,m;
public:
    Czas(void)
    {
        g=0, m=0;
    }

    void zwiekszGodz (int oIle)
    {
        g = (g+oIle)%24;
    }

    void zwiekszMin(int oIle)
    {
        zwiekszGodz((m+oIle)/60);
        m = (m+oIle)%60;
    }

    zwiekszGM(int oIleG, int oIleM)
    {
        zwiekszGodz(oIleG);
        zwiekszMin(oIleM);
    }
    void info(void)
    {
        cout << g << ":" << m << endl;
    }
};

class CzasPlus : public Czas
{
private:
    int s;
public:
    CzasPlus(void)
    {
        s=0;
    }
    void zwiekszSek(int oIle)
    {
        zwiekszMin((s+oIle)/60);
        s=(s+oIle)%60;
    }
    void zwiekszGMS(int oIleG, int oIleM, int oIleS)
    {
        zwiekszGodz(oIleG);
        zwiekszMin(oIleM);
        zwiekszSek(oIleS);
    }
    void info(void)
    {
        cout << g << ":"<<m<<":" <<s<< endl;
    }
};

int main()
{
    Czas t1;
    t1.zwiekszGM(2, 75);
    t1.info();

    CzasPlus cp1;
    cp1.zwiekszGMS(2, 75, 75);
    cp1.info();


    return 0;
}
