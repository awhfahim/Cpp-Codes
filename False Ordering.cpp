#include <bits/stdc++.h>
using namespace std;

void FastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    FastIO();

    int Test_case;
    cin >> Test_case;

    list <int> vec;
    list <int> vec1;
    list <int> vec2;
    int m = 0;
    int g = 0;

    for(int i = 0; i < Test_case; i++)
    {
        for(int j = 2; j<=1000; j++)
        {
            int s = 0;
            for(int n = 1; n <= j; n++)
            {
                if(j%n==0)
                {
                    s++;
                }
            }
            if(s==2)
            {
                m++;
                vec.push_front(j);
            }
            if(s==24)
            {
                g++;
                vec2.push_front(j);
            }
            if(s==4)
            {

                vec1.push_front(j);
            }
        }
    }
    /*
    for(auto it:vec)
    {
        cout << it << endl;
    }
    */
    for(auto it:vec2)
    {
        cout << it << endl;
    }
    cout << m << "," << g ;
    return 0;
}
