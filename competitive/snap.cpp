
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

#define mod 1000000007
long long a[2501][2501] ,dp[2501][2501] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
slld(m) ;
FOR(i,n){
    FOR(j,m){
        slld(a[i][j]) ;
    }
}
dp[0][0]=a[0][0] ;
for(i=1;i<m;i++){
    if(i>1)
    dp[0][i]=(dp[0][i-1]+1)*a[0][i]%mod ;
    else
        dp[0][i]=(dp[0][i-1])*a[0][i]%mod ;
}
for(i=1;i<n;i++){
        if(i>1)
    dp[i][0]=(dp[i-1][0]+1)*a[i][0]%mod ;
    else
        dp[i][0]=(dp[i-1][0])*a[i][0]%mod ;

}
for(i=1;i<n;i++){
    for(j=1;j<m;j++){
        dp[i][j]=(dp[i-1][j]+dp[i][j-1]+dp[i-1][j-1])*a[i][j]%mod ;
        if(i==j&&i>1)
            dp[i][j]=(dp[i][j]+a[i][j])%mod ;
    }
}
plldn(dp[n-1][m-1]%mod) ;
return 0 ;
}
