#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, pat;
    cin >> txt >> pat;

    int M = pat.size();
    int N = txt.size();
    int i = 0;

    while(i <= N-M)
    {
        int j;

        for(j = 0; j<M; j++)
        {
            if(txt[i+j] != pat[j])
                break;
        }
        if(j==M)
        {
            cout << i << endl;
            i = i + M+1;
        }
        else if (j == 0)
        {
            i = i + 1;
        }
        else
        {
            i = i + j;
        }
    }
}
