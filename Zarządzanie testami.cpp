
#include <iostream>



using namespace std;

class EdycjaTestu;
class UdostepnianieTestu;

class EdycjaTestu : public UdostepnianieTestu {
public:
    string nazwa;
    string testy[5];


    EdycjaTestu() {

        nazwa = "dany_przedmiot";
        testy[0] = "istnieje";




    }




};


int main()
{


    string login, haslo;

    cout << "Podaj login: " << login << endl;
    cin >> login;


    cout << "Podaj haslo: " << haslo << endl;
    cin >> haslo;

    if ((login == "nauczyciel1") && (haslo == "1234")) {

        cout << "Logowanie uwierzytelnione" << endl;

    }
    else {

        do {
            cout << "Podany login lub haslo jest nieprawidlowe. Sprobuj ponownie: " << endl;
            cout << "Podaj login: ";
            cin >> login;

            cout << "Podaj haslo: ";
            cin >> haslo;
        } while ((login != "nauczyciel1") && (haslo != "1234"));

        if ((login == "nauczyciel") && (haslo == "1234"))
        {
            cout << "Logowanie uwierzytelnione" << endl;
        }

    }

    return 0;

}
