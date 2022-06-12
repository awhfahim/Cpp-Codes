#include <bits/stdc++.h>
using namespace std;

int divCount(long long n)
{
    int sum = 0;
    int N = sqrtl(n);
    for(int i = 1; i <= N; i++)
    {
        if(n%i==0)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    cout << divCount(10000000000);
    return 0;
}
