#include<bits/stdc++.h>
using namespace std;

void FastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int low_bound(vector <int> &arr, int L)
{
    int l = 0, r = arr.size() - 1;
    while(l<r)
    {
        int M = l + (r-l)/2;
        if(arr[M]<L)
        {
            l = M+1;
        }
        else
        {
            r = M;
        }
    }
    return l;
}

int high_bound(vector<int>&arr, int K)
{
  int L = 0, R = arr.size()-1;
  while(L<R)
  {
      int M = L + (R-L+1 )/2;
      if(arr[M]>K)
      {
          R = M - 1;
      }
      else L = M;
  }
  return R;
}

int main()
{
    FastIO();

    ///int Test_Case,n,q,a;
    ///cin >> Test_Case >> n >> q;

    int n = 5;
    int a;
    vector <int> arr;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    int L,K;
    cin >> L >> K;
    /*
    while(Test_Case--)
    {
        while(q--)
        {

        }
    }*/
    cout << high_bound(arr, K) << " " << low_bound(arr, L);
    return 0;
}
