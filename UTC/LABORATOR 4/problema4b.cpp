#include <iostream>
using namespace std;
void main()
{
	int a[] = { 1, -3, 6, 7, -12, -4, 2, 9, 0, 8, 17, 0, 0, '\0' };
	int i, pozitive, negative, nule;

	pozitive = 0;
	negative = 0;
	nule = 0;
	i = 0;
	while (a[i])
	{
		if (a[i] < 0)
			negative++;
		if (a[i] > 0)
			pozitive++;
		if (a[i] == 0)
			nule++;
		i++;
	}
	cout << "numarul de nule este: " << nule << endl;
	cout << "numarul de negative este: " << negative << endl;
	cout << "numarul de pozitive este: " << pozitive << endl;
	system("pause");
}