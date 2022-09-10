#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int num;
        cin >> num;

        if(num <= 9)
        {
            cout << num << "\n";
        }
        else
        {
            set <int> vc;
            for(int i = 9; i > 0; i--)
            {
                if(num < 10 && vc.count(num) == false)
                {
                    vc.insert(num);
                    break;
                }
                if(num == 1 && i == 1)
                {
                    num -= 1;
                    vc.insert(1);
                }
                if(num > i)
                {
                    num -= i;
                    vc.insert(i);
                }
            }
            for(auto it : vc)
            {
                cout << it;
            }
            cout << "\n";
        }

    }

    return 0;
}

