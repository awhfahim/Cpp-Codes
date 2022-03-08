#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    set <int> s;

    for(int i = 0; i<q; i++)
    {
        int a,b;
        cin >> a;

        if(a==0)
        {
            cin >> b;
            s.insert(b);
            cout << s.size() << endl;
        }
        else
        {
            cin >> b;
            cout << s.count(b) << endl;
        }
    }
}
