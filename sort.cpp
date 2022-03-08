#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int a[6] = {4,2,7,9,0,1};
    sort(a, a+6);

    int n = sizeof(a);
    for(int i = 0; i<6; i++){
        cout<<a[i]<< " ";
    }
    cout<<"\n";

    vector<int> v = {4,2,6,9,2};
    sort(v.begin(),v.end());
    for(int i = 0; i<5; i++){
        cout<<v[i]<<" ";
    }
}
