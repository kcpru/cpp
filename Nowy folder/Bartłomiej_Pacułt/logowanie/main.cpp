#include <iostream>

using namespace std;

class Dane
{
    public:
        string login;
        string haslo;
};

int main()
{
    Dane m_dane;

    cout << "Podaj login: ";
    cin >> m_dane.login;
    cout << endl << endl;

    cout << "Podaj haslo: ";
    cin >> m_dane.haslo;
    cout << endl << endl;

    string m_login;
    string m_haslo;

    bool zalogowano = false;

    while(!zalogowano)
    {

        cout << "-- Logowanie --" << endl << endl;
        cout << "Login: "; cin >> m_login;
        cout << "Haslo: "; cin >> m_haslo;

        if(m_login != m_dane.login)
        {
            cout << "Bledny login" << endl << endl;
        }
        else if(m_haslo != m_dane.haslo)
        {
            cout << "Bledny login" << endl << endl;
        }
        else
        {
            zalogowano = true;
            cout << "Zalogowano" << endl;
        }
    }

    return 0;
}
