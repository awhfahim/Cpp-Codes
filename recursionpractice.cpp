#include <bits/stdc++.h>
using namespace std;

int getfactorial(int n, int curr = 1)
{
    if(n == 1) return curr;
    return getfactorial(n-1, n * curr % 100);
}

bool IsPalindrome(string s, int L, int R)
{
    if(L >= R) return true;
    return s[L] == s[R] && IsPalindrome(s, L+1, R-1);
}

int main()
{
    string s = "absba";
    cout << IsPalindrome(s, 0, (int)s.size()-1);
    //cout << getfactorial(45000);
    return 0;
}
