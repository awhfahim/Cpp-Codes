#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int N)
{
    if(N < 2) return false;
    for(int i = 2; i*i <= N; i++)
    {
        if(N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;

        double num1 = sqrt(num);
        int num2 = sqrt(num);

        if(num1 > num2)
            cout << "NO" << "\n";
        else if(isPrime(num2))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}

