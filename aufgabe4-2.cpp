#include <iostream>
using namespace std;

bool teilbar(bool teilbar);
main()
{
    int zahl;
    int teiler;
    bool a=false;
    cout<< "Gib eine positive Zahl ein "<<endl;
    cin>>zahl;
    while (zahl<=0)
    {
        cout<< "Die Zahl ist negativ gib eine positive Zahl ein"<<endl;
        cin>>zahl;
    }
    for (int i=2, i<10, i++)
    {
        a = teilbar(zahl,teiler);
        if (a)
        {
            cout<<"Deine Zahl ist teilbar durch"<<i<<endl;
            i=10;
        }

    }
}

bool teilbar(int zahl, int teiler)
{
    if(zahl%teiler==0)
    {return true;}
    else {return false;}
