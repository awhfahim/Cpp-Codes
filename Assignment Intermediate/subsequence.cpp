#include <bits/stdc++.h>
using namespace std;

bool find_subsequence(string& s, string& s1, int L = 0, int R = 0)
{
    if (R == s1.length()) return true;
    if (L < s.length())
    {
        if (s[L] == s1[R])
        {
            find_subsequence(s, s1, L + 1, R + 1);
        }
        else
            find_subsequence(s, s1, L + 1, 0);

    }
}

int main()
{
    string s = "fahimhgfhgfjhg";
    string s1 = "himlo";

    cout << find_subsequence(s, s1);

    return 0;
}

