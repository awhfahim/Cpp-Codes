#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000

bool component[MAX + 5];
vector<int> primes;

void seive(int n)
{
    component[1]=true;
    for(int i = 2; i*i <= n; i++)
    {
        if(component[i]==false)
        {
            for(int j = i*i; j<=n; j+=i)
            {
                component[j]=true;
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        if(component[i]==false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    seive(10000000);

    int Test, cs = 1;
    scanf("%d", &Test);

    while(Test--)
    {
        int Num;
        int result = 0;
        scanf("%d", &Num);

        for(int i = 0; primes[i]<=(Num/2); i++)
        {
            int leftpointer = primes[i];
            int rightpointer = Num - leftpointer;
            if(component[rightpointer]==false)
            {
                result++;
            }
        }
        cout << "Case " << cs++ << ": "<< result << "\n";
    }
    return 0;
}


