#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int divCount(int root,long long int Num)
{
    int total;
    for(int i = 2; i <= root; i++)
    {
        if(Num%i==0)
        {
            total++;
        }
    }
    return (total*2)+1;
}

int main()
{
    fastIO();
    /*
    vector<long long int> vec;
    for(int i = 1; i<=100000; i++)
    {
        long long int squareNumber = pow(i,2);
        vec.push_back(squareNumber);
    } */
    int T_Case;
    cin >> T_Case;

    while(T_Case--)
    {
        long long int K,Low,High;
        cin >> K >> Low >> High;

        int Nlow, Nhigh;
        if(Low<=1) Nlow = 2;
        else Nlow = sqrtl(Low);
        if(pow(Nlow,2) < Low) Nlow++;
        Nhigh = sqrtl(High);

        //cout << Nlow <<" "<< Nhigh;
        int total = 0;
        for(int i = Nlow; i<=Nhigh; i++)
        {
            int res = 0;
            long long int square = pow(i,2);
            res = divCount(i,square);
            if(res==K) total++;
        }
        cout << total << "\n";
    }

    //cout << divCount(100000,10000000000);

    return 0;
}
