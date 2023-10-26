#include <iostream>

using namespace std;

struct Product
{
    string name;
    float price;
};

int main()
{
    Product products[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj nazwe produktu: ";
        cin >> products[i].name;
        cout << "Podaj cene produktu: ";
        cin >> products[i].price;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (products[j].price < products[j + 1].price)
            {
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << products[i].name << " " << products[i].price << endl;
    }
}
