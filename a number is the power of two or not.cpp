#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPower(int n)
{
    return ((n & (n-1))==0);
}
int main()
{
    for(int i = 1; i <= 10000; i++)
    {
        if(isPower(i)==true)
        {
            cout << i << "\n";
        }
    }

    return 0;
}

