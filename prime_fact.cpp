#include <bits/stdc++.h>
using namespace std;

vector <int> generateUniquePrimeFactors(int n)
{
    vector <int> primes;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            primes.push_back(i);
            while(n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1) cout << n << " ";
    return primes;
}

int main()
{
    int n;
    cin >> n;
    auto results = generateUniquePrimeFactors(n);
    for(auto it : results)
    {
        cout << it << " ";
    }
    return 0;
}
