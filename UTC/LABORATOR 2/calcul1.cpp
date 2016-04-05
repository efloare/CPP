#include <iostream>
using namespace std;
void main()
{
	double Tc;
	double Tf;
	cout << "introduceti temperatura in grade C: ";
	cin >> Tc;
	if (!(Tc >= 0 && Tc <= 9))
	{
		cout << "Introduceti un numar va rog!" << endl;
	}
	else
	{
	Tf = (9./5.)*Tc+32;
	cout << "temperatura in grade Fahrenheit este: " << Tf << endl;
	}
	system ("pause");
}