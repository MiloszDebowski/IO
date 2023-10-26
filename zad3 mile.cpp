#include <iostream>

using namespace std;

void zamiana(double km, double& ml, double& mm)
{
    ml = km * 0.621371;
    mm = km * 0.539957;
}

int main()
{
    double km, ml, mm;
    cout << "Podaj odleglosc w kilometrach: ";
    cin >> km;
    zamiana(km, ml, mm);
    cout << km << " km to " << ml << " mil ladowych i " << mm << " mil morskich" << endl;
    return 0;
}