#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000;
#define mp make_pair
vector<int> prime;
vector<pair<int,int> > divisor;
bool vis[N];

bool cmp(pair<int,int> x, pair<int,int> y){ // pair<number(n),divisor>
    if(x.second<y.second){
        return 1;
    }
    else if(x.second==y.second && x.first>y.first){
        return 1;
    }
    else return 0;
}
void divCount(int n){ //O(sqrt(N))
    int temp=n;
    int ans=1;
    for(int i=0;i<prime.size() && prime[i]*prime[i]<=n;i++){
        int cn=1;
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                cn++;
                n/=prime[i];
            }
            ans=ans*cn;
        }
    }
    if(n>1){
        ans=ans*2;
    }
    divisor.push_back(mp(temp,ans));
}
void sieve(){
    for(int i=3;i*i<=N;i+=2){
        if(vis[i]==0){
            for(int j=i*i;j<=N;j+=2*i){
                vis[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<=N;i+=2){
        if(vis[i]==0) prime.push_back(i);
    }

}
int main(){
    sieve(); //O(Nlog(logN))
    int t,n;

    for(int i=1;i<=1000;i++){
        divCount(i); // N*O(sqrt(N))
    }
    sort(divisor.begin(),divisor.end(),cmp); // O(NlogN)
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);

        printf("Case %d: %d\n",i,divisor[n-1].first); // O(1)
    }
}
