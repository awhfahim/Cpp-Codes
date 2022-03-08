#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> vec;
    for(int i = 1; i<=q; i++)
    {
        int a,b;
        cin >> a;

        if(a == 0)
        {
            cin >> b;
            vec.push_back(b);
        }
        else if(a == 1)
        {
            cin >> b;
            cout << vec[b] <<endl;
        }
        else
        {
            vec.pop_back();
        }
    }
    return 0;
}
