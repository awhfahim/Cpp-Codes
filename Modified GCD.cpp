#include <bits/stdc++.h>
using namespace  std;
#define ll long long

vector <int> divs;
vector <int> finalDivs;
void divscount(ll n, ll m)
{
    if(n % 2 == 0)
    {
        for(ll i = 1; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                ll num = n / i;
                if(num == i) divs.push_back(i);
                else
                {
                    divs.push_back(i);
                    divs.push_back(num);
                }
            }
        }
    }
    else
    {
        for(ll i = 1; i*i <= n; i+=2)
        {
            if(n % i == 0)
            {
                ll num = n / i;
                if(num == i) divs.push_back(i);
                else
                {
                    divs.push_back(i);
                    divs.push_back(num);
                }
            }
        }
    }
    for(auto it : divs)
    {
        if(m % it == 0)
        {
            finalDivs.push_back(it);
        }
    }
}

int result(ll low, ll high)
{
    sort(finalDivs.begin(), finalDivs.end());
    for(int j = finalDivs.size()-1; j >= 0; j--)
    {
        if(finalDivs[j] <= high && finalDivs[j] >= low)
        {
            return finalDivs[j];
        }
    }
    return -1;
}

int main()
{
    ll a,b,n;
    scanf("%lld %lld %lld", &a, &b, &n);

    for(ll i = 1; i <= n; i++)
    {
        ll low, high;
        scanf("%lld %lld", &low, &high);
        divscount(a,b);
        printf("%d\n", result(low,high));
    }
    return 0;
}
