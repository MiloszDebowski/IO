#include <iostream>

using namespace std;
int main() {

    int AA[10];
    int *BB = nullptr;
    int iloscUjemnych = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe " << i + 1 << ": ";
        cin >> AA[i];
        if (AA[i] < 0) {
            iloscUjemnych++;
        }
    }

    if (iloscUjemnych > 0) {
        BB = new int[iloscUjemnych];
        int indeksBB = 0;

        for (int i = 0; i < 10; i++) {
            if (AA[i] < 0) {
                BB[indeksBB] = AA[i];
                indeksBB++;
            }
        }
    }


    if (iloscUjemnych > 0) {
        cout << "Liczby ujemne: ";
        for (int i = 0; i < iloscUjemnych; i++) {
            cout << BB[i] << " ";
        }
        cout << endl;
    }

    cout << "Ilosc liczb ujemnych: " << iloscUjemnych << endl;
    cout << "Ilosc liczb pominietych: " << (10 - iloscUjemnych) << endl;

    delete[] BB;

    return 0;
}

