#include <bits/stdc++.h>

using namespace std;

int main()
{

    /*
    int T;
    cin>> T;
    getchar();
    while(T-->0){

        string str;
        getline(cin, str);
        cout<<"Size "<<str.size()<<endl;
        cout<<"Content : "<<str<<endl<<"\n";
    }
    */

    string arr[5];
    arr[0] = "Fahim";
    arr[1] = "Raj";
    arr[3] = "Hoblos";
    arr[4] = "Midedi";
    arr[2] = "Rahman";

    for(auto it : arr)
    {
        cout << it << "\n";
    }
    int n, m;
   // scanf("%d", &n);
    //printf("%d", n);
    int value = scanf("%d %d", &n, &m);
    int num = n;
    int bnum = m;
    cout << n << "," << m;
}
