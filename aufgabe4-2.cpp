#include <iostream>
using namespace std;

bool teilbar(int zahl, int teiler);
int main()
{
    int zahl;
    bool a=false;
    cout<< "Gib eine positive Zahl ein "<<endl;
    cin>>zahl;
    while (zahl<=0)
    {
        cout<< "Die Zahl ist negativ gib eine positive Zahl ein"<<endl;
        cin>>zahl;
    }
    for (int i=2; i<11; i++)//der scheint nicht ganz durch zu gehen, der geht nur einmal durch das ganze....else wird nicht ausgeführt
    {
        //a = teilbar(zahl,i);
        if (teilbar(zahl,i))
        {
            cout<<"Deine Zahl ist teilbar durch "<<i<<endl;
        }
        else
        {
            cout<<"Deine Zahl ist nicht durch"<<i<<"teilbar"<<endl;
        }


    }

}

bool teilbar(int zahl,int teiler)
{
    if (zahl % teiler == 0)
        {
            return true;
        }
    else
        {
            return false;
        }
}