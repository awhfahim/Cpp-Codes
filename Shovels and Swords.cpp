#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        long long int a,b;
        cin >> a >> b;
        if(a == 0 || b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            long long int sum = a + b;
            long long res = sum / 3;
            cout << res << endl;
        }
    }
    return 0;
}
