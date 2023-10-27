#include <iostream>

using namespace std;

int main()
{
	int testchoice;
	int testnumber[10];
	string choice1;
	choice1_:
	cout << "Wybierz test: ";
	cin >> testchoice;
	cout << "Czy napewno chcesz wybrac ten test? y/n lub cos innego aby wyjsc" << endl;
	cin >> choice1;
	if (choice1 == "n")
		goto choice1_;
	if (choice1 == "y") {
		int i;
		for (i = 0; i < 9; i++) {
			if (testchoice = testnumber[i])
				goto next;
			else
				cout << "Nie ma takiego testu.";
		}
	}
	else
	cout << "Koniec.";
next: 
	cout << "TEST: " << endl; //WYSWIETLANIE TESTU
	//WYBOR ODPOWIEDZI W TESCIE
	//ZATWIERDZANIE TESTU
	//KOMUNIKAT O ZAKONCZENIU
	

}
