#include <bits/stdc++.h>
using namespace std;

vector <int> countDivs;

void primeFactors(int n)
{
    int c=2, i = 1,sum = 0;
    while(n>1)
    {
        if(n%c==0)
        {
            sum++;
            n/=c;
        }
        else
        {
            c++;
            i *= (sum*2)+1;
            sum = 0;
        }
        if(n==1) i *= (sum * 2)+1;
    }
    countDivs.push_back(i);
}
    int main()
    {
        for(int i = 2; i <= 100000; i++)
        {
            primeFactors(i);
        }
        return 0;
    }

