#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0) ;
    cout.tie(0) ;
   int t ;
   cin>>t;
   while(t--)
   {
       int n ;
       cin >> n ;
       string str[3][n] ;
       map<string,int>mp ;
       for(int i = 0 ; i < 3 ; i ++)
       {
           for(int j = 0 ; j <n ; j ++)
           {
               cin >> str[i][j] ;
               mp[str[i][j] ] = 0 ;
           }
       }
       for(int i = 0 ; i < 3 ; i ++)
       {
           for(int j = 0 ; j <n ; j ++)
           {
               mp[str[i][j] ] ++ ;
           }
       }
       for(int i = 0 ; i < 3 ; i ++)
       {
           int r = 0 ;
           for(int j = 0 ; j <n ; j ++)
           {
               if(mp[str[i][j] ]==1)
               {
                   r+=3 ;
               }
               else if (mp[str[i][j] ]==2)
               {
                   r+=1 ;
               }
           }cout << r<< " ";
       }cout <<endl ;
   }}


