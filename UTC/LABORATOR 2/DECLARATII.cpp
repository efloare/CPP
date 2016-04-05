#include <iostream>
using namespace std;
void main()
{
int a, b; 
double r;
cout << "introduceti a: ";
cin >> a;
cout << "introduceti b: ";
cin >> b;
if  (a == 1 && b == 2 )
{r = a/b;
cout << "a/b = " << r << endl;
r = (double)a/b;
cout << "(double)a/b = " << r << endl;
r = 1. + a/b;
cout << "1. + a/b = " << r<< endl;
r = 1. + (a*1.)/b;
cout << "1. + (a*1.)/b = " << r << endl;
r = 1. + (double)a/b;cout << "1. + (double)a/b = " << r << endl;}else
	cout << "introduceti 1 si 2";
system ("pause");
}