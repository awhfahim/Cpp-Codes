#include <bits/stdc++.h>
using namespace std;

#define MAX 100000
#define ll long long

ll phi[MAX + 5];
void seiveforphi(ll n)
{
    for(ll i = 1; i <= n; i++)
        phi[i] = i;

    for(ll i = 2; i <= n; i++)
    {
        if(phi[i] == i)
        {
            for(ll j = i; j <= n; j += i)
            {
                phi[j] -= phi[j]/i;
            }
        }
    }

}

int main()
{
    seiveforphi(MAX);

    int Test_case;
    scanf("%d", &Test_case);
    int cn = 0;

    vector <int> pre_calculate_result = {0,0};
    int sum = 0;
    for(int i = 2; i<=100000; i++)
    {
        sum += i - phi[i];
        pre_calculate_result.push_back(sum);
    }
    while(Test_case--)
    {
        int number;
        scanf("%d", &number);

        printf("Case %d: ", ++cn);
        printf("%d\n", pre_calculate_result[number]);
    }


    return 0;
}
