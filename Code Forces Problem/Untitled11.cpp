#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v,t;
    while(scanf("%d %d",&v,&t)==2)
    {
        if(v && t)
            cout << (2*v*t) << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}

