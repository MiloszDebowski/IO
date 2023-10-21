#include <iostream>
using namespace std;
int main()
{

for(int i=300;i<=1200;i++)
{



    if(i%400==0)
    {
    cout<<endl;
    }
    if(i%100==0)
    {
        cout<<"*** ";
    }

    if(i%2!=0)
    {
        cout<<i<<" ";
    }


}


    return 0;
}
