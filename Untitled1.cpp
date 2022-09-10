#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int n = 100;
    int a = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int m = j; j < n; j++)
            {
                a+=1;
            }
        }
    }

    cout << a << endl;

    return 0;
}

