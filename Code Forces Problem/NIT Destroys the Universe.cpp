#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n;
   cin >> n;
   vector <int> a(n);
   for(int& x : a) cin >> x;
   if(a == vector <int>(n,0))
   {
       cout << 0 << endl;
       return;
   }
   int i = 0;
   while(i < n && a[i] == 0) i++;
   int j = n;
   while(j > 0 && a[j-1] == 0) j--;
   for(int k = i; k < j; k++)
   {
       if(a[k] == 0)
       {
           cout << 2 << endl;
           return;
       }
   }
   cout << 1 << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}

