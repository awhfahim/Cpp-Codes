#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000

int phi[MAX + 5];
void seiveforphi(int n)
{
    for(int i = 1; i <= n; i++)
        phi[i] = i;

    for(int i = 2; i <= n; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j <= n; j+=i)
            {
                phi[j] -= phi[j]/i;
            }
        }
    }
}
void solve(int n)
{
    ll H = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            H += phi[i] * phi[j];
        }
    }
    cout << H << "\n";
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    seiveforphi(MAX);
    int t;
    cin >> t;

    while(t--)
    {
        int N;
        cin >> N;
        solve(N);
    }

    return 0;
}

