#include <bits/stdc++.h>
using namespace std;

int Get_Euclid_extended(int a, int b, int& x, int& y)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = Get_Euclid_extended(b, a%b, x1, y1);
    x = y1;
    y = x1 - (y1*(a/b));
    return d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
/*
    int a,b,c;
    cin >> a >> b >> c;
    int x,y,g;

    if(x > 0 && y > 0)
    {
        cout << "Yes" << "\n";
    }
    else cout << "No" << "\n";

    return 0; */

int a, b, c;

	cin >> a >> b >> c;
	for(int i = 0; i <= c / a; i++)
		for(int j = 0; j <= c / b; j++)
			if(i * a + j * b == c) {
				puts("Yes");
				return 0;
			}
	puts("No");
	return 0;
}
