#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> temp;
void gensubset(vector <int> &vc, int sz, int currpos = 0)
{

        if(currpos == sz)
        {
            for(auto it : temp)
            {
                cout << it << " ";
            }
            cout << "\n";
            return;
        }
        temp.push_back(vc[currpos]);
        gensubset(vc,sz,currpos+1);
        temp.pop_back();
        gensubset(vc,sz,currpos+1);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <int> vc = {1,2,3};
    int sz = vc.size();
    gensubset(vc,sz);
    return 0;
}

