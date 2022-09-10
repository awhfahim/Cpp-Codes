#include <bits/stdc++.h>
using namespace std;
#define Max 1000005

const int Base = 129;
const int Mod = 1000000007;

long long h[Max + 5], po[Max + 5];
void generatePrefixHash(string &s)
{
    h[0] = s[0];
    for(int i = 1; i < s.size(); i++)
    {
        h[i] = ((h[i-1] * Base) + s[i]) % Mod;
    }
    po[0] = 1;
    for(int i = 1; i <= s.size(); i++)
    {
        po[i] = (po[i-1] * Base) % Mod;
    }
}

long long generateHash(string &s)
{
    long long H = 0;
    for(auto &x : s)
    {
        H = ((H * Base) + x)  % Mod;
    }
    return H;
}

long long getHash(int L, int R)
{
    if( L == 0 ) return h[R];
    return (h[R] - (h[L - 1] * po[R - L + 1] % Mod) + Mod) % Mod;
}

int main()
{
    string s = "aaabbababbabababa";
    string s2 = "fahim";
    //string s,s2;
    //cin >> s >> s2;

    generatePrefixHash(s);
    long long hashofs2 = generateHash(s2);

    cout << hashofs2;
    return 0;

    for(int i = 0; i + s2.size() <= s.size(); i++)
    {
        if(getHash(i, i + s2.size() - 1) == hashofs2)
        {
            cout << i << "\n";
        }
    }

    return 0;
}

