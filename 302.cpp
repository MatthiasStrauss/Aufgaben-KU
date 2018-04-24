//aufgabe3_1
#include <iostream>
using namespace std;

int iterativ(int z);
int rekursiv(int z);

int main()
{
    int w;
    int z;
    int erg;
    cout<<"Waehle Berechnungsmethode"<<endl<< "0= iterativ"<<endl<<"1=rekursiv"<<endl;
    cin>>w;
    cout<<"Gib eine ganze Zahl ein"<<endl;
    cin>>z;
    if(z<0) z*=-1;
    if(w == 0)
    {
        erg = iterativ(z);
    }
    else
    {
        erg = rekursiv(z);//rekursiv(z);
    }
    cout<<"n!="<<erg<<endl;
}
int iterativ(int z)
{
    int n=1;
    for (int i=1; i<z+1; i++)
    {
        n=n*i;
        //cout<<"test"<<i<<n<<endl;
    }
    z = n;
    return(z);
}
int rekursiv(int z)
{
    if(z>1)
    {
        return(z* rekursiv(z - 1));
    }
    else
    {
        return(1);
    }
}
