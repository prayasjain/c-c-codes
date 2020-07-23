

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
#define bitcount __builtin_popcountll
#define ll long long

#define mod 1000000007
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;
struct s{
long long r ;
long long h ;
}a[maxn];
bool cmp (s a , s b){
     if (a.r < b.r)
        return true ;
     if(a.r==b.r){
        if(a.h<b.h)
            return true  ;
     }
     return false ;

}
long long dp[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
long long ans ;
slld(t) ;
while(t--){
    slld(n) ;
    FOR(i,n){
        slld(a[i].r) ;
        slld(a[i].h) ;
    }
    sort(a,a+n,cmp) ;
    dp[0]= a[0].h ;
    ans= dp[0] ;
    FOR(i,n){
        p=0 ;
    dp[i]=a[i].h ;
    for(j=0;j<i;j++){
        if(a[j].r<a[i].r && a[j].h<a[i].h){
            p=max( dp[j],p) ;
        }
    }
    dp[i]=dp[i]+ p;
    ans=max(ans,dp[i]) ;
    }
    plldn(ans) ;
}

return 0 ;
}
