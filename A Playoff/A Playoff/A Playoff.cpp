#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Test_Case;
	cin >> Test_Case;

	while (Test_Case--)
	{
		int n;
		cin >> n;

		int Task = 1 << n;
		
		cout << Task - 1 << endl;
	}
	return 0;
}