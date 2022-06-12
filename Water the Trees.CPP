#include <bits/stdc++.h>
using namespace std;

long long result(vector <long long> &heights)
{
    sort(heights.begin(), heights.end());
    long long number = heights[heights.size()-1];
    long long res = 0;
    for(auto it : heights)
    {
        long long a = number - it;
        res += a;
    }
    long long remain = res % 3;
    return ((res / 3) * 2) + remain;
}

int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int n;
        scanf("%d", &n);
        vector <long long> vec;
        for(int i = 0; i < n; i++)
        {
            long long h;
            scanf("%lld", &h);
            vec.push_back(h);
        }
        printf("%lld\n",result(vec));
    }
    return 0;
}
