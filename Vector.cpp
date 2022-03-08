#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec;
    vec.push_back(32);
    vec.push_back(3);
    vec.push_back(4);

    vec.pop_back();
    for(auto it : vec){
        cout << it << endl;
    }

    /*
    sort(vec.begin(), vec.end());
    for(int i = 0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    vec.clear();
    cout<<"\n";
    cout<<vec.size();
    */

///cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];


    /*
    vector<int> odd;
    vector<int> even;

    int n,temp;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>temp;
        if(temp%2==0){
            even.push_back(temp);
        }
        else{
            odd.push_back(temp);
        }
    }
    int l = odd.size() - 1;
    while(l >= 0){
        cout<<odd[l]<<" ";
        l--;
    }
    cout<<"\n";
    int o = even.size()-1;
    while(o>=0){
        cout<<even[o]<<" ";
        o--;
    }
    */

    return 0;
}
