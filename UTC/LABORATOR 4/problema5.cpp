#include <iostream>
using namespace std;
void main()
{
	int n;
	cout << "cate numere vreti sa introduceti?" << endl;
	cin >> n;

	int a[3000];
	long sum;
	int i;

	i = 0;
	sum = 0;
	while (i < n)
	{
		
		cout << "-" << i + 1 << "- nr = ";
		cin >> a[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		sum = sum + a[i];
		i++;
	}
	cout << "suma este: " << sum << endl;
	system("pause");
}