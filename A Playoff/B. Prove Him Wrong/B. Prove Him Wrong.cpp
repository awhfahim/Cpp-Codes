#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
	if (n == 1)
	{
		return 0;
	}
	sum (n + (n - 1));
}

int main()
{

	cout << sum(5);
	return 0;
}