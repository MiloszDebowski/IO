#include<iostream>
using namespace std;
struct Przedmiot;
struct Test;

struct Test
{

    string nazwa;
    int ocena;


};

struct Przedmiot:public Test
{

    string nazwa;
    Test testy[5];

    Przedmiot()
    {
         nazwa="przedmiot x";
         for(int i=0;i<5;i++)
         {
             testy[i].nazwa="test x";
             testy[i].ocena=5;
         }
    }

};


int main(void)
{
Przedmiot przedmioty[5];
int x;
wybor:
cout<<"Wybierz przedmiot: "<<endl;
for(int i=0;i<5;i++)
{
    cout<<i+1<<". "<<przedmioty[i].nazwa<<endl;

}
cin>>x;
system("cls");
if(x<1||x>5)
{
    cout<<endl<<endl<<"NIE MA TAKIEGO PRZEDMIOTU - WYBIERZ JESZCZE RAZ"<<endl<<endl;
    goto wybor;
}
wybor2:
cout<<"Wybierz test. Dostepne testy: "<<endl;

for(int i=0;i<5;i++)
{
cout<<i+1<<". "<<przedmioty[x].testy[i].nazwa<<endl;
}
int y;
cin>>y;
system("cls");
    if(y<1||y>5)
    {
        cout<<endl<<endl<<"NIE MA TAKIEGO TESTU - WYBIERZ JESZCZE RAZ"<<endl<<endl;
        goto wybor2;
    }
cout<<"Przedmiot: "<<przedmioty[x].nazwa<<endl;
    cout<<"Test: "<<przedmioty[x].testy[y].nazwa<<endl;
    cout<<"Ocena: "<<przedmioty[x].testy[y].ocena<<endl;
}
