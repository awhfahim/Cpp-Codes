#include <bits/stdc++.h>
using namespace std;

int reverse_number(int n)
{
    int r = 0;
    while(n > 0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}

bool isPalindrome(int n)
{
    return (reverse_number(n) == n);
}

int main()
{
    vector <int> palin;
    palin.push_back(0);
    for(int i = 1; i <= 40000; i++)
    {
        if(isPalindrome(i))
        {
            palin.push_back(i);
        }
    }

    for(auto it : palin)
    {
        cout << it << "\n";
    }
    cout << palin.size();
    return 0;
}
