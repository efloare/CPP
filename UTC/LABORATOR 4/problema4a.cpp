#include <iostream>
using namespace std;
void main()
{
	int a[] = { 1, -3, 6, 7, -12, -4, 2, 9, 0, 8, 17, 0, 0, '\0' };
	int i, n;

	i = 0;
	n = 0;
	while (a[i])
	{
		if (a[i] < 0)
		{
			a[i] == 0;
			n++;
		}
		i++;
	}
	cout << "numarul de 0 este: " << n << endl;
	system("pause");
}