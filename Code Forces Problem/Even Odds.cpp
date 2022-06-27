#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n,k;
    cin >> n >> k;

    double div = (n+1)/2;
    ll oddNum = floor(div);
    if(k <= oddNum)
    {
        cout << (k*2)-1;
    }
    else{
        cout << (k - oddNum) * 2;
    }
    return 0;
}


