#include <bits/stdc++.h>
using namespace std;

int f91(int N)
{
    if (N <= 100)
        return f91(f91(N + 11));
    if (N >= 101)
        return N - 10;
}

int main()
{
    int N;
    while(cin >> N)
    {
        if(N==0){
            break;
        }
        cout <<"f91"<<"("<<N<<") = "<<f91(N) << endl;
    }
    return 0;
}

