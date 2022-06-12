#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO();
    int test_Case;
    cin >> test_Case;

    while(test_Case--)
    {
        long long int n,B,x,y;
        cin >> n >> B >> x >> y;
        vector <long long int> vec;
        vec.push_back(0);
        for(int i = 1; i<=n; i++)
        {
            long long int cond1 = (vec[i-1])+x;
            long long int cond2 = (vec[i-1])-y;
            if(cond1 <= B)
            {
                vec.push_back(cond1);
            }
            else
            {
                vec.push_back(cond2);
            }

        }
        long long int sum = 0;
        for(auto it : vec)
        {
            sum += it;
        }
        cout << sum << endl;
    }
}
