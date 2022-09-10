#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        string x1, x2;
        int  p1, p2;

        cin >> x1 >> p1;
        cin >> x2 >> p2;

        int a = x1.length() + p1;
        int b = x2.length() + p2;


        if(a > b)
        {
            cout << ">" << "\n";
        }
        else if( a < b)
        {
            cout << "<" << "\n";
        }
        else
        {
            int x =  x1[0] - '0';
            int y =  x2[0] - '0';
            if(x == y)
            {
                int Fsum = 0, Ssum = 0;
                for(int i = 0; i < x1.length(); i++)
                {
                    Fsum += (x1[i] - '0');
                    Ssum += (x2[i] - '0');
                }
                if(Fsum > Ssum)
                    {
                        cout << ">" << "\n";
                    }
                    else if(Fsum < Ssum)
                    {
                        cout << "<" << "\n";
                    }
                    else
                    {
                        cout << "=" << "\n";
                    }
            }
            else if(x > y)
            {
                cout << ">" << "\n";
            }
            else
            {
                cout << "<" << "\n";
            }
        }

    }

    return 0;
}

