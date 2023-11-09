#include<iostream>
using namespace std;

class Autoryzacja {
public:
    bool pozwolenie;

    Autoryzacja() {
        
        pozwolenie = true; //zmiana uprawnien
    }
};

struct Test
{
    string nazwa;
    int ocena;
};

struct Przedmiot : public Test
{
    string nazwa;
    Test testy[5];

    Przedmiot()
    {
        nazwa = "przedmiot x";
        for (int i = 0; i < 5; i++)
        {
            testy[i].nazwa = "test x";
            testy[i].ocena = 5;
        }
    }
};

int main(void)
{
    Autoryzacja authorization; 

    
   

    Przedmiot przedmioty[5];
    int x;

wybor:
    cout << "Wybierz przedmiot: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << przedmioty[i].nazwa << endl;
    }
    cin >> x;
    system("cls");

    if (x < 1 || x > 5)
    {
        cout << endl
            << endl
            << "NIE MA TAKIEGO PRZEDMIOTU - WYBIERZ JESZCZE RAZ" << endl
            << endl;
        goto wybor;
    }

    int y;

wybor2:
    cout << "Wybrany przedmiot: " << przedmioty[x - 1].nazwa << endl;
    cout << "Wybierz test. Dostepne testy: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << przedmioty[x - 1].testy[i].nazwa << endl;
    }
    cin >> y;
    system("cls");

    if (y < 1 || y > 5)
    {
        cout << endl
            << endl
            << "NIE MA TAKIEGO TESTU - WYBIERZ JESZCZE RAZ" << endl
            << endl;
        goto wybor2;
    }

    if (!authorization.pozwolenie) {
        cout << "Brak uprawnien do przegladania ocen." << endl;
        return 0;
    }

    cout << "Przedmiot: " << przedmioty[x - 1].nazwa << endl;
    cout << "Test: " << przedmioty[x - 1].testy[y - 1].nazwa << endl;
    cout << "Ocena: " << przedmioty[x - 1].testy[y - 1].ocena << endl;

    return 0;
}

    cout<<"Test: "<<przedmioty[x].testy[y].nazwa<<endl;
    cout<<"Ocena: "<<przedmioty[x].testy[y].ocena<<endl;
}
