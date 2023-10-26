#include <iostream>
// Napisz program, który wypisuje wszystkie liczby nieparzyste z
//przedziału <300;1200> oddzielone spacją. Po pełnych setkach
//ma być nie spacja lecz sekwencja „ *** ” (spacja gwiazdki
//spacja). Po wielokrotnościach 400 ma być bezpośrednie
//przejście do nowego wiersza (bez spacji lub sekwencji znaków)

using namespace std;

int main()
{
    for (int i = 300; i <= 1200; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        if (i % 100 == 0) {
            cout << " *** ";
        }
        if (i % 400 == 0) {
            cout << endl;
        }
    }
    return 0;
}
