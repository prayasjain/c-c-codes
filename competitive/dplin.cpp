
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define vec vector
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
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#define bitcount __builtin_popcountll
#define ll long long
#define mod 1000000007

//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;
long long dp[1004][1004],cost[1004],out[1004];
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
long long tc ;
slld(tc) ;
while(tc--){
    slld(n) ;
    slld(p) ;
    FOR(i,n){
        slld(out[i]) ;
        slld(cost[i]) ;
    }
    FOR(i,n+1){
        FOR(j,p+1) {
            if(i==0)
               {
                 dp[i][j]=0 ;
                 continue ;
               }
            else if(j==0)
                dp[i][j]=0;
            dp[i][j]=dp[i-1][j] ;
            if(j>=cost[i-1]) {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-cost[i-1]]+out[i-1]) ;
            }
        }
    }
FOR(i,n+1){
    FOR(j,p+1){
        dp[i][j]=dp[i][j]+(p-j) ;
        //plld(dp[i][j]) ;
        //ps(" ") ;
    }
    //psn("" );
}
long long m1=0,m2=0 ;
FOR(i,n+1){
FOR(j,p+1){
    if(m2<dp[i][j]){
        m2=dp[i][j] ;
        m1 =j ;
    }
    else if(m2==dp[i][j])
        m1 =min(m1,j);
}
}
    plld(m1);
    ps(" ") ;
    plldn(m2) ;

}
return 0 ;
}
