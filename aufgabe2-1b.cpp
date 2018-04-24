//aufgabe2-1a
#include <iostream>
using namespace std;

int main(void)
{
	
double zahl1, zahl2, sum, dif,prod,div; // Variablendefinition
 cout << "Bitte geben Sie Zahl 1 ein: ";
cin >> zahl1;
 cout << "Bitte geben Sie Zahl 2 ein: ";
cin >> zahl2;
	
sum= zahl1+zahl2;
dif= zahl2-zahl1;
prod=zahl1*zahl2;	
div=0;
	
if (dif<0)dif=dif*-1;
	
cout << "Die Summe betraegt: " << sum << endl;
cout << "Die Differenz betraegt: " << dif << endl;
cout << "Das Produkt betraegt: " << prod << endl;	
	
if(zahl2==0){

cout << "Der Divisor betraegt null, mathemathischer Fehler " ;}
else{
div=zahl1/zahl2;
cout << "Der Quotientenwert betraegt: " << div << endl;}
	
return 0;
}