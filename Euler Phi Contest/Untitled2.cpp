#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
#include<vector>
#include<cmath>
#include<cctype>
#include<sstream>
#include<set>
#include<list>
#include<stack>
#include<utility>
#include<queue>
#include<algorithm>
#include<cstdlib>
// End
//..........
// Macro
#define sf scanf
#define pf printf
#define lp1(i,n) for(i=0;i<n;i++)
#define lp2(i,n) for(i=1;i<=n;i++)
#define mset(c,v) memset(c,v,sizeof(c))
#define cp(a) cout<<" "<<a<<" "
#define nl puts("")
#define sq(x) ((x)*(x))
#define all(x) x.begin(),x.end()
#define reall(x) x.rbegin(),x.rend()
#define s_wap(x,y) x^=y;y^=x;x^=y;
#define sz size()
#define gc getchar()
#define pb push_back
#define freader freopen("input.txt","r",stdin)
// End.........

// Size
#define mx7 2000010
#define mx6 1500000
#define mx5 100005
#define mx4 1000100
#define inf 1<<30                                           //infinity value
#define eps 1e-9
#define mx (65540)
#define mod 1000000007
#define pi acos(-1.0)

// Macros for Graph

#define white 1
#define gray 2
#define black 3
#define nil 0

using namespace std;
/***************/

// typedef

typedef long long LL;
typedef long L;
typedef unsigned long long ull;
typedef unsigned long ul;
typedef unsigned int ui;
typedef pair<int, int> pii;
typedef vector<int>vi;
typedef vector<long long> vll;
typedef vector<long>vl;
typedef vector<char>vch;
typedef vector<string>vs;
typedef map<int,int>mpii;
typedef map<int,bool>mpbi;
typedef map<long,bool>mpbl;
typedef map<long long,bool>mpbll;
typedef map<char,int>mpci;
typedef map<char,bool>mpbc;
typedef map<string,int>mpsi;
typedef map<long long,long long>mpll;

// template

template<class T> T gcd(T a, T b ) {return b!=0?gcd<T>(b,a%b):a;}
template<class T> T large(T a, T b ) {return a>b?a:b;}
template<class T> T small(T a, T b ) {return a<b?a:b;}
template<class T> T diffrnce(T a, T b) {return a-b<0?b-a:a-b;}

// macros for seieve

#define setbit(n) (prime[n>>6] |= (1 << ((n>>1)&31)))
#define checkbit(n) (prime[n>>6] & (1 << ((n>>1)&31)))

LL phi[mx7+9];

void generate_phi()
{
    int i,j;

    phi[1]=1;

    for(i=2;i<=mx7;i++)
    {
        if(!phi[i])
        {
            phi[i] = i-1;

            for(j=i+i;j<=mx7;j+=i)
            {
                if(!phi[j])
                {
                    phi[j] = j;
                }

                phi[j] /= i;
                phi[j]*=(i-1);
            }
        }
    }

    //for(i=1;i<=10;i++)cp(phi[i]);
}

LL ans[mx7+9];

void depth_phi()
{
    LL cnt=1,i,x;
    ans[2]=1;

    for(LL i=3;i<=mx7;i++)
    {
        x=phi[i];
        cnt=1;

        while(x>1)
        {
            x=phi[x];
            cnt++;
        }

        ans[i] = cnt;
    }
}

int main()
{
    generate_phi();
    depth_phi();

    int test;
    sf("%d",&test);

    while(test--)
    {
        LL m,n,i,res=0;

        sf("%lld %lld",&m,&n);

        if(m>n)
        {
            s_wap(m,n);
        }

        for(i=m;i<=n;i++)
        {
            res+=ans[i];
        }

        pf("%lld\n",res);
    }

    return 0;
}
