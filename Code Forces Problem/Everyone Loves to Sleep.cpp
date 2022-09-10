#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, H, M;
        scanf("%d %d %d", &n, &H, &M);

        int total = H * 60;
        total += M; int total2 = 0;
        while(n--)
        {
            int h1, m1;
            scanf("%d %d",&h1, &m1);

            total2 = total2 + (h1 * 60);
            total2 += m1;
            if(total > total2)
            {
                total -= total2;
            }
            else
            {
                total2 -= total;
                total = total2;
            }
        }
        cout << total / 60 << " " << total % 60;

    }

    return 0;
}

