#include <iostream>
using namespace std;
/*
Funktion y=x_1^3+7*x_2
*/
int func(int a, int b, int y);
int main()
{
    int a;
    int b;
    int y;
    cout<< "Gib den Wert fuer x_1 an "<<endl;
    cin>>a;
    cout<< "Gib den Wert fuer x_2 an "<<endl;
    cin>>b;
    y = func(a,b,y);
    cout<<"Das Ergebnis ist: "<<y<<endl;
}
int func(int a, int b, int y)
{
    y=a*a*a+7*b;
    return y;
}
