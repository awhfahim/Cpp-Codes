#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> p;
    p.push_back(1);
    p.push_back(2);
    p.push_back(3);
    p.push_back(4);
    p.push_back(5);

    cout<<p.size()<<"\n";
    p.pop_back();
    cout<<p.size()<<"\n";

    vector<int> v(5);
    cout << v.size()<<"\n";

    for(int i = 0; i<v.size(); i++){
        cin >> v[i];
    }

    for(int i = 0; i<v.size(); i++){
        cout << v[i];
    }

   /// int arr[5];
    //int a = sizeof(arr);
    //for(int i = 0; i<a; i++){
      //  cin>> arr[i];
    ///}
      //for(int i = 0; i<a; i++){
       // cout << arr[i] << ",";
    //}
}
