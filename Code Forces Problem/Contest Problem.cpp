#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int n;
    int x = 0;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        if(s[1] == '+') ++x;
        else --x;
    }
    cout << x << "\n";

    return 0;
}

