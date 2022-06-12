#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000

int getPhi(int n) /// Brute force solution
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(__gcd(i, n) == 1)
        {
            cnt++;
        }
    }
    return cnt;
}

int phi[MAX + 5];
void seiveforphi(int n)  /// Time Complexity NLogN
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

int main()
{
    seiveforphi(MAX);
    for(int i = 1; i<= 20; i++)
    {
        cout << i <<  ":" << phi[i] << "\n";
    }
    return 0;
}
