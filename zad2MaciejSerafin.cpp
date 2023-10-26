#include <iostream>

using namespace std;

int main()
{
    int AA[10];
    int* BB;
    int licznik = 0;
    int pominietych = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> AA[i];
        if (AA[i] < 0)
        {
            licznik++;
        }
    }
    BB = new int[licznik];
    for (int i = 0; i < 10; i++)
    {
        if (AA[i] < 0)
        {
            BB[i] = AA[i];
        }
        else
        {
            pominietych++;
        }
    }
    cout << "Liczby ujemne to: ";
    for (int i = 0; i < licznik; i++)
    {
        cout << BB[i] << " ";
    }
    cout << endl << "Ilosc liczb ujemnych to: " << licznik << endl;
    cout << "Ilosc liczb pominietych to: " << pominietych << endl;
    delete[] BB;
    return 0;
}
