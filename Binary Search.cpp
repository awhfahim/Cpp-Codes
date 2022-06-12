#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;

using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool does_exist(vector <int>&arr, int elem)
{
    int L = 0, R = arr.size()-1;
    while(L<=R)
    {
        int M = L + (R-L)/2;
        if(arr[M] == elem) return true;
        if(arr[M] > elem) R = M - 1;
        else L = M + 1;
    }
    return false;
}

int mid(int &L, int &R)
{
    int midean = L + (R-L) / 2;
    return midean;
}

int count_even_numbers(vector<int>&arr)
{
    int L = 0; int R = arr.size();
    while(L<R)
    {
        int M = L + (R-L)/2;
        if(arr[M]%2==0) L = M + 1;
        else R = M;
    }
    return L;
}

int main()
{
    /*
    int sum = 0;
    for(int i = 0; i < 12; i++)
    {
        int v = (rand()) % 12 ;
        sum += v;
    }
    cout << setprecision(10) << fixed << 1.00 * sum / 12 << endl;
    */
    //auto st = high_resolution_clock::now();
    int L = 6;
    vector <int> arr = {1,2,3,4,5,6,7,8,9};
   // cout << count_even_numbers(arr) << endl;
   /*
   for(int i = 0; i < 1000; i++)
   {

   }

    auto en = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(en - st);

    cout << duration.count() << " " << duration.count()/1000.0 << endl;
    */
    cout << does_exist(arr,L);

    return 0;
}
