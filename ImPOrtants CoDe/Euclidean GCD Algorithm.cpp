#include <bits/stdc++.h>
using namespace std;

int get_gcd(int a,int b)
{
    if( b == 0 )
    {
        return a;
    }
    else
        return get_gcd(b, a % b);
}

int main()
{
    cout << get_gcd(480,180);
    return 0;
}
