#include <bits/stdc++.h>
using namespace std;

int find_notz(int n)
{
   int cnt = 0;
   int p = 5;
   int base = p;

   while(n >= base)
   {
       cnt += n / base;
        base *= p;
   }
   return cnt;
}

int find_N(int Q)
{
    int L = 0, R = 1000000000;
    while(L < R)
    {
        int M = L + (R - L) / 2;
        if(find_notz(M) < Q)
        {
            L = M + 1;
        }
        else R = M;
    }
    if(find_notz(L) != Q) return -1;
    return L;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        cout << find_N(num) << "\n";
    }
    return  0;
}
