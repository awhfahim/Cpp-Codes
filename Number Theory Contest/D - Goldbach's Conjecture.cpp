#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int Max = 10000000;

bool composite[Max + 5];

vector <int> primes;

void seive()
{
    composite[1] = true;
    for(int i = 2; i * i <= Max; i++)
    {
        if(composite[i] == false)
        {
            for(int j = i * i; j <= Max; j+=i)
            {
                composite[j] = true;
            }
        }
    }
    for(int i = 1; i <= Max; i++)
    {
        if(composite[i] == false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    seive();
    int T, cs = 1;
    scanf("%d", &T);

    while(T--)
    {
        int num, result = 0;
        scanf("%d", &num);

        int dvd = num / 2;

        for(int i = 1; primes[i] <= dvd; i++ )
        {
            int leftpointer = primes[i];
            int rightpointer = num - leftpointer;
            if(composite[rightpointer]==false)
            {
                result++;
            }
        }
        cout << "Case " << cs++ << ": "<< result << "\n";
    }


    return 0;
}

