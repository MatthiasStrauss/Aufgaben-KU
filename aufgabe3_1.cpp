//aufgabe3_1
#include <iostream>
using namespace std;

//FKT: y=x^2+3
int main()
{
	int s; //startwert
	int e; //endwert
	int d; //dekrement
	int h; //hilfsvariable
	int z; //hilfszeiger
	
	cout << "Bitte gib ein Startwert an: ";
	cin>>s;
	cout << "Bitte gib ein Endwert an: ";
	cin >>e;
	cout << "Bitte gib ein Delta an: ";
	cin>>d;
	if(e<s)
	{
		cout <<"Dein Startwert ist kleiner als der Endwert,sie wurden getauscht"<<endl;
		h =s;
		s = e;
		e = h;
	}
	if((e-s) % d != 0)
	{
		cout<<"Dein Endwert wurde angepasst"<<endl;
		e = e+( (e-s) % d);
	}
	
	int tab[1+(e-s)/d];
	
	for(int i=0; i<1+(e-s)/d; i++) //oder i=s; i<e; i+d;
	{
		tab [i] = (s+i*d)*(s+i*d) +3;
		cout<<"x="<<s+i*d <<" y="<<tab[i]<<endl;
	}
}