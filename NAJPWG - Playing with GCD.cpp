#include <bits/stdc++.h>
using namespace std;

vector <int> generatePrimes(int n)
{
    vector <int> primes;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            primes.push_back(i);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1) primes.push_back(n);
    return primes;
}

int euler_function(int n)
{
    auto prime_numbers = generatePrimes(n);
    int multiplication = 1; int yt = n;
    for (auto it : prime_numbers)
    {
        yt /= it;
        multiplication *= (it - 1);
    }
    int result = n - (multiplication * yt);
    return result * 2;
}

int main()
{
    int Test_case;
    scanf("%d", &Test_case);
    int cn = 0;
    while (Test_case--)
    {
        int number;
        scanf("%d", &number);
        //cin >> number;
        cout << "Case " << ++cn << ": " << euler_function(number) << "\n";
    }

    return 0;
}
