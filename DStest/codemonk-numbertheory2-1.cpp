

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
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
double dp[maxn] ;
double p2,p3,ans ;
double fun(long long n){
    if(dp[n]!=-1)
        return dp[n] ;

    dp[n]=p2*fun(n-2)+p3*fun(n-3) ;
    return dp[n] ;

}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
slld(p) ;
p2=(double)p/100 ;
p3=1-((double)p/100) ;
FOR(i,n+1)
dp[i]=-1 ;
dp[0]=1 ;
dp[1]=0 ;
dp[2]=p2 ;
dp[3]=p3 ;
printf("%0.6Lf",fun(n)) ;
return 0 ;
}
