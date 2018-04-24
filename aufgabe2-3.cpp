//aufgabe2-1a
#include <iostream>
using namespace std;

int main(void)
{
char zeichen;
int code;
cout << "Bitte geben Sie ein Zeichen ein: ";
cin >> zeichen;
	
cout <<"Dein Zeichen ist:" << zeichen<<"\n";
code=int(zeichen);
	
if(code>=48 && code<=57)
    cout <<"Dein Zeichen ist eine Zahl";//zahl
else if(code>=65 && code<=90)
{cout <<"Dein Zeichen ist ein Grossbuchstabe";}//Gro�buchstabe
else if(code>=97 && code<=122)
{cout <<"Dein Zeichen ist ein Kleinbuchstabe";}//Kleinbuchstabe
else
{cout <<"Dein Zeichen ist in der Kategorie Sonstiges";}//Sonstige


return 0;
}