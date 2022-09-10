#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n++;
    while(1)
    {
        set<int> s;
        int m = n;
        while (m)
        {
            s.insert(m%10);
            m/=10;
        }
        if (s.size()==4)
        {
            cout << n << endl;
            return 0;
        }
        n++;
    }
    return 0;
}
