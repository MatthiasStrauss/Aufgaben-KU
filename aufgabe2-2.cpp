//aufgabe2-1a
#include <iostream>
using namespace std;

int main(void)
{
	
double zahl1, zahl2, zahl3, zahl4,sum,mittelwert; // Variablendefinition
 cout << "Bitte geben Sie Zahl 1 ein: ";
cin >> zahl1;
 cout << "Bitte geben Sie Zahl 2 ein: ";
cin >> zahl2;
 cout << "Bitte geben Sie Zahl 3 ein: ";
cin >> zahl3;
 cout << "Bitte geben Sie Zahl 4 ein: ";
cin >> zahl4;
	
sum=zahl1+zahl2+zahl3+zahl4;
mittelwert=sum/4;
cout<<"Der Mittelwert betraegt:" << mittelwert;
return 0;
}