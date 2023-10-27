#include<iostream>
using namespace std;
class Przedmiot;
class Testy;

class Przedmiot :public Testy {
public:
	string nazwa;
	 Testy test[5];

	
	Przedmiot()
	{
		nazwa = "Przedmiot X";
		test[0].nazwa = "Test1";
		test[0].ocena = 5;
		test[1].nazwa = "Test1";
		test[1].ocena = 5;
		test[2].nazwa = "Test1";
		test[2].ocena = 5;
		test[3].nazwa = "Test1";
		test[3].ocena = 5;
		test[4].nazwa = "Test1";
		test[4].ocena = 5;
		
	}
};




class Testy {

public:
	string nazwa;
	float ocena;

	Testy(){}

};
int main(void)
{
	Przedmiot przedmioty[6];
	
	cout << "Wybierz przedmiot: ";
	for(int i=0;i<6;i++)
	{
		cout << i + 1 << ". " << przedmioty[i].nazwa << endl;
	}

}
