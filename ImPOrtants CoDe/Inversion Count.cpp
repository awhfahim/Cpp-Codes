#include <bits/stdc++.h>
using namespace std;

long long inv_cnt = 0;
void mergeSubarrays(vector <int> &vc, int L, int R)
{
    vector <int> tempVec;
    int M = L + (R - L) / 2;
    int leftP = L, rightP = M + 1;

    while(leftP <= M && rightP <= R)
    {
        if(vc[leftP] <= vc[rightP])
        {
            tempVec.push_back(vc[leftP]);
            leftP++;
        }
        else{
            tempVec.push_back(vc[rightP]);
            inv_cnt += M - leftP + 1;
            rightP++;
        }
    }

    while(leftP <= M)
    {
        tempVec.push_back(vc[leftP]);
        leftP++;
    }

    while(rightP <= R)
    {
        tempVec.push_back(vc[rightP]);
        rightP++;
    }

    for(int i = L; i <= R; i++)
    {
        vc[i] = tempVec[i-L];
    }
}
void mergeSort(vector<int> &vc, int L, int R)
{
    if( L >= R) return;
    int M = L + (R - L) / 2;
    mergeSort(vc, L, M);
    mergeSort(vc, M + 1, R);
    mergeSubarrays(vc, L, R);
}
int main()
{
    /*int d;
    cin >> d;
    while(d--)
    {
        int n;
        cin >> n;
        vector <int> vc;
        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vc.push_back(num);
        }

    }*/
    vector <int> vc = {6,5,4,3,2,1};
    mergeSort(vc, 0, vc.size()-1);
        cout << inv_cnt << "\n";

    return 0;
}
