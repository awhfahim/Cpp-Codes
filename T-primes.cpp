#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long int b;
        cin >> b;
        long long int coun = 0;
        long long int ans = sqrt(b);
        for(int i = 1; i < ans; i++)
        {
            if(ans*ans == b && ans%i==0)
            {
                coun++;
            }
        }
        if(coun == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
