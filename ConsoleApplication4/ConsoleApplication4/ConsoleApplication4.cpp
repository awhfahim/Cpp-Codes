#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000

bool component[MAX + 5];
vector<int> primes;

void seive(int n)
{
    component[1] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (component[i] == false)
        {
            for (int j = i * i; j <= n; j += i)
            {
                component[j] = true;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (component[i] == false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    seive(10000000);

    int Test, cs = 1;
    //scanf("%d", &Test);
    cin >> Test;
    //cout << primalityTest(7);

    while (Test--)
    {
        int Num;
        //scanf("%d", &Num);
        cin >> Num;

        if (Num < 7)
        {
            cout << "Case " << cs++ << ": " << 1 << "\n";
        }
        else
        {
            int t = 1;
            int result = 0;
            int Pointer = primes[t];
            cout << Pointer << "\n";
            int primeCheck; // = Num - Pointer;
            cout << primeCheck << "\n";

            while (Pointer <= primeCheck)
            {
                if(Pointer > primeCheck) break;
                primeCheck = Num - Pointer;
                if (component[primeCheck] == false)
                {
                    result++;
                    Pointer = primes[t++];
                }
                else
                {
                    Pointer = primes[t++];
                }
            }
            cout << "Case " << cs++ << ": " << result << "\n";
        }

    }
    return 0;
}
