#include <bits/stdc++.h>
using namespace std;
#define ll long long

void get_divs(set <int> &s, int num)
{
    for(int i = 1; i*i <= num; i++)
    {
        if(num % i == 0)
        {
            s.insert(i);
            s.insert(num/i);
        }
    }
}
ll get_div(set <int> &s,int n)
{
    ll ans = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            if(s.count(i)) ans++;
            else s.insert(i);
            int res = n / i;
            if(s.count(res)) ans++;
            else s.insert(res);
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        set <int> s;
        int num1, num2;
        cin >>num1 >> num2;
        get_divs(s,num1);
        cout << get_div(s,num2) << "\n";

    }
    return 0;
}

