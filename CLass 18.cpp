#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 11

ll bm(ll a, ll b)
{
    if(b == 0) return 1;
    if(b % 2 == 0)
    {
        ll r = bm(a, b/2) % M;
        return (r * r)% M;
    }
    return a * bm(a, b - 1) % M;
}

unordered_set<ll> magicNumbers;

void genMagicNumber(long long n = 1)
{
    if (n > 10) return;
    if (magicNumbers.count(n) > 0) return;
    magicNumbers.insert(n);
    genMagicNumber(n * 2);
    genMagicNumber(n * 3);
    genMagicNumber(n * 5);
}

int main()
{
    //cout << bm(4, 7);
    genMagicNumber();
    cout << magicNumbers.size();
    return 0;
}
