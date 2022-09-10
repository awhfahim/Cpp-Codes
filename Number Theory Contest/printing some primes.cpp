#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000000;
bool composite[MAX + 5];

void seive()
{
    composite[1] = true;
    for(int i = 3; i * i <= MAX; i+=2)
    {
        if(composite[i] == false)
        {
            for(int j = i * i; j <= MAX; j+=i)
            {
                composite[j] = true;
            }
        }
    }
    printf("2\n");
    int cnt = 0;
    for(int i = 3; i <= MAX; i+=2)
    {
        cnt+= composite[i] == false;
        if(cnt == 100)
        {
            printf("%d\n", i);
            cnt = 0;
        }
    }
}

int main()
{
    seive();

    return 0;
}

