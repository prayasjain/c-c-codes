#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100004
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)
#define bitcount __builtin_popcountll
#define ll long long

#define mod 1000000007
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;

long long dp[maxn],a[maxn],n,k ;
long long fun( long long s){
    if(s>=n)
        return 0 ;
    if(dp[s]!=-1)
        return dp[s] ;

    long long m = 0 ;
    m= max(a[s]+fun(s+1+k),fun(s+1)) ;
    m=max(m,0) ;
    dp[s]=m ;
    return dp[s] ;

}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,x,y,z,i,j ,l,m,p,f ;
slld(t) ;
while(t--){
    slld(n) ;
    slld(k) ;
    FOR(i,n){
    slld(a[i]) ;
    dp[i]=-1 ;
    }
    plldn(fun(0)) ;
    //FOR(i,n)
      //  plldn(dp[i]) ;
}

return 0 ;
}
