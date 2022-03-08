#include <bits/stdc++.h>

using namespace std;

int main()
{
    string txt,pat;
    cin >> txt >> pat;

    int found = txt.find(pat);
    while(found != string::npos)
    {
        cout << found << endl;
        found = txt.find(pat, found + 1);
    }

    return 0;
}

