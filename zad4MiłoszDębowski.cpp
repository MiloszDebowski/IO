#include <iostream>
#include <algorithm>  // Dodaj nagłówek dla std::sort
using namespace std;

class Produkt {
private:
    string nazwa;
    float cena;

public:
    void setNazwa(string nazwa0) { nazwa = nazwa0; }
    void setCena(float cena0) { cena = cena0; }
    string getNazwa(void) { return nazwa; }
    float getCena(void) { return cena; }
};

// Funkcja komparatora do sortowania produktów według ceny
bool porownajCeny( Produkt &produkt1,  Produkt &produkt2) {
    return produkt1.getCena() < produkt2.getCena();
}

void wypisz(Produkt *tab) {
    cout << "Lista produktow od najtanszego do najdrozszego" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Nazwa: " << tab[i].getNazwa() << " | Cena: " << tab[i].getCena() << endl;
    }
}

int main() {
    Produkt tab[10];

    for (int i = 0; i < 10; i++) {
        string nazwa;
        float cena;
        cout << "Podaj nazwe " << i + 1 << " produktu: ";
        cin >> nazwa;
        tab[i].setNazwa(nazwa);
        cout << endl << "Podaj cene " << i + 1 << " produktu: ";
        cin >> cena;
        tab[i].setCena(cena);
        system("cls");
    }
    wypisz(tab);
    cout<<endl<<endl<<"Produkty po sortowaniu: "<<endl;
    sort(tab, tab + 10, porownajCeny);
    wypisz(tab);

    return 0;
}
