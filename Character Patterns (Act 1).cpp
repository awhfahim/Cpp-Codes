#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l, c;
        cin >> l >> c;

        for(int i = 1; i <= l; i++)
        {
            if(i % 2 != 0)
            {
                for(int j = 1; j <= c; j++)
                {
                    if( j % 2 != 0)
                    {
                        printf("*");
                    }
                    else printf(".");
                }
                printf("\n");
            }
            else{
                for(int j = 1; j <= c; j++)
                {
                    if( j % 2 != 0)
                    {
                        printf(".");
                    }
                    else printf("*");
                }
                printf("\n");
            }

        }
    }

    return 0;
}

