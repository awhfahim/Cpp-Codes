#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

bool Composite[MAX + 5];
vector<int> primes = {2};
void primeFactor(int n)
{
    int i = 0;
    while(n>1)
    {
        if(n%primes[i]==0)
        {
            cout << primes[i] << " ";
            n /= primes[i];
        }
        else
        {
            i++;
        }
    }
}

void generatesPrime(int n)
{
    Composite[1]=true;
    for(int i = 2; i*i<=n; i++)
    {
        if(Composite[i]==false)
        {
            for(int j = i*i; j<=n; j+=i)
            {
                Composite[j]=true;
            }
        }
    }
    for(int i = 3; i<= n; i+=2 )
    {
        if(Composite[i]==false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    generatesPrime(n);
    primeFactor(n);
    return 0;
}
