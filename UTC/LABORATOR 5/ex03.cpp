#include <iostream>
using namespace std;
void main()
{
	char s[] = "1254";
	cout << s << endl;
	int n, i;
	n = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = 10 * n + s[i] - '0';
		i++;
	}
	cout << n << endl;
}