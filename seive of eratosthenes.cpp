#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000

bool composite[MAX + 5];

void seive(int n)
{
    composite[1]=true;
    for(int i = 2; i * i <= n; i++)
    {
        if(composite[i]==false)
        {
            for(int j = i * i; j<=n; j+=i)
            {
                composite[j]=true;
            }
        }
    }
    int primecount = 0;
    cout << "2" <<"\n";
    for(int i = 2; i<=n; i++)
    {
        primecount  += composite[i]== false;
        if(primecount==101)
        {
            cout << i << "\n";
            primecount = 1;
        }
    }
    //cout << primecount << "\n";
}

int main()
{
    seive(100000000);
    return 0;
}
