

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)
#define pb(x) push_back(x)
#define mod 1000000007

int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
long long key,lock ;
vector<long long> a ;
slld(key) ;
slld(lock) ;
slld(n) ;
FOR(i,n){
    slld(x) ;
    a.pb(x);
}
vector<long long> dp (100001,-1) ;
dp[key]=0 ;
queue<long long> q ;
q.push(key) ;
while(!q.empty()){
    x=q.front() ;
    q.pop() ;
    FOR(i,n){
        y=a[i] ;
        if(dp[(y*x)%100000]==-1){
            dp[(y*x)%100000]=dp[x]+1 ;
            q.push((y*x)%100000);

        }
    }
}
plldn(dp[lock]) ;
return 0 ;
}
