#include <iostream>
using namespace std;

int main()
{
    int c,pos1,pos2,pos3,pos4;
    cout<<"ingrese un numero de 4 dijitos :"<< endl;
    cin>>c;
    pos4 = c%10;
    pos3 = (c/10)%10;
    pos2 = (c/100)%10;
    pos1 = (c/1000);
    cout<<pos4<<pos3<<pos2<<pos1;

}