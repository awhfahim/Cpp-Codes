#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,c;
        cin >> s >> c;
        int found = s.find(c);
        int temp = 1;

        while(found != string::npos)
        {
            if(found%2==0)
            {
                temp = found;
            }
            found = s.find(c, found + 1);
        }

        if(temp != 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
