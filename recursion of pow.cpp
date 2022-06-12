#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gerPow(int a, int b)
{
    if(b == 0) return 1;
    if(b % 2 == 0)
    {
        ll half = gerPow(a, b/2);
        return half * half;
    }
    return (a * gerPow(a,b-1));
}

int main()
{
    cout << gerPow(5,3)<< endl;

    return 0;
}
