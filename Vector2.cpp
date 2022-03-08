#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;


    vector <int> vec[n];
    for(int i = 0; i<q; i++)
    {
        int a,t,x;
        cin >> a;
        if(a==0)
        {
            cin >> t;
            cin >> x;
            vec[t].push_back(x);
        }
        else if(a==1)
        {
            cin >> t;
            int s = vec[t].size();

            if(s>0)
            {
                for(int j = 0; j<s-1; j++)
                {
                    cout << vec[t][j] <<" ";
                }
                for(int k = 0; k<1; k++)
                {
                    cout << vec[t][s-1];
                }
            }

            cout << endl;
        }
        else
        {
            cin >> t;
            vec[t].clear();
        }
    }
    return 0;
}
