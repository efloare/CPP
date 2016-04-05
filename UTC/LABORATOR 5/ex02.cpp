#include <iostream>
using namespace std;
double suma(double[], int);
double maximum(double[], int);
double minimum(double[], int);
void main()
{
	double sum, max, min;
	double x[] = { 1., 34., -234., 43., -12 };
	sum = suma(x, 5);
	max = maximum(x, 5);
	min = minimum(x, 5);
	cout << "Suma val. din sirul x este : " << sum << endl;
	cout << "Maximum val. din sirul x este : " << max << endl;
	cout << "Minimum val. din sirul x este : " << min << endl;
}
double suma(double a[], int n)
{
	double s = 0.;
	int i;
	for (i = 0; i < n; i++)
		s = s + a[i];
	return s;
}
double maximum(double a[], int n)
{
	double mx = a[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (mx < a[i])
			mx = a[i];
	}
	return mx;
}
double minimum(double a[], int n)
{
	double mx = a[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (mx > a[i])
			mx = a[i];
	}
	return mx;
}