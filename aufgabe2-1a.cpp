//aufgabe2-1a
#include <iostream>
using namespace std;

int main(void)
{
	
double zahl1, zahl2, sum, dif,prod; // Variablendefinition
 cout << "Bitte geben Sie Zahl 1 ein: ";
cin >> zahl1;
 cout << "Bitte geben Sie Zahl 2 ein: ";
cin >> zahl2;
	
sum= zahl1+zahl2;
dif= zahl2-zahl1;
prod=zahl1*zahl2;	
	
if (dif<0)dif=dif*-1;

cout << "Die Summe betraegt: " << sum << endl;
cout << "Die Differenz betraegt: " << dif << endl;
cout << "Das Produkt betraegt: " << prod << endl;
	
return 0;
}