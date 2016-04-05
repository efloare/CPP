#include <iostream>
using namespace std;
void main()
{
	int a[] = { 1, -3, 6, 7, -12, -4, 2, 9, '\0'};
	int i;

	i = 0;
	while (a[i])
	{
		if (a[i] < 0)
		{
			a[i] = -a[i];
		}
		cout << a[i] << endl;
		i++;
	}
	system("pause");
}