#include <iostream>

using namespace std;

int main()
{
	int i, k;
	int a[4][4] = { {1,5,6,4},{3,2,15,8},{10,9,8,11},{14,16,11,17} };

	cin >> i;
	cin >> k;

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 4; k++)
		{
			cout << a[i][k] << ";  ";
		}
	}

	cout << endl;

	swap(a[i][k], a[k][i]);

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 4; k++)
		{
			cout << a[i][k] << ";  ";
		}
	}

	return 0;
}