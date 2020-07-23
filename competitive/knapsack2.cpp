#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;
long long a[100001],c[100001],sm,dp[100001][501] ;


long long max(long long a, long long b) { return (a > b)? a : b; }

long long dp2 (long long i , long long j){
if(dp[i][j]!=(sm-1))
    return dp[i][j] ;

if(i==0||j==0)
            {
                dp[i][j]=sm ;
                return  (sm );

            }
if(j>=c[i-1])
{
    dp[i][j] = max(dp2(i-1,j-c[i-1])-a[i-1],dp2(i-1,j)) ;
    return  dp[i][j];
}

else
{
   dp[i][j]= dp2(i-1,j) ;
   return  dp[i][j];
}


}

int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,r,ct,tmp ;
slld(t) ;
while(t--){

    sm= 0 ;
    slld(n) ;
    slld(k);
    slld(m) ;
    for(i=0;i<n;i++) {
            slld(a[i]) ;
            c[i] = 1000 ;
            sm+=a[i] ;

    }
    for(i=0;i<m;i++){
        slld(l) ;
        slld(r) ;
        slld(ct) ;
        for(j=l-1;j<r;j++)
        {
            if(c[j]>ct)
                c[j] =ct ;

        }


    }

   /* for(i=0;i<=n;i++){
        for(j=0;j<=k;j++){
            if(i==0||j==0)
                dp[i][j] = sm ;
            else if(j>=c[i-1]){
                    //cout<<'{'<<i<<' '<<j<<'}' ;
                dp[i][j] = max(dp[i-1][j-c[i-1]]-a[i-1],dp[i-1][j]) ;
            }
            else
                dp[i][j] = dp[i-1][j] ;
        }
    }
*/
for(i=0;i<=n;i++)
    for(j=0;j<=k;j++)
    dp[i][j]=(sm-1) ;
   cout<<dp2(n,k)<<'\n' ;
}

return 0 ;
}
