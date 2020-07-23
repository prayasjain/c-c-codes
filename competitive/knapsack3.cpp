#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;
 long a[100001],c[100001] ;
 long long dp[100001][501] ;

long long max(long long a, long long b) { return (a > b)? a : b; }


int main(){
 long t ,n,x,y,z,i,j,k ,l,m,p,r,ct,sm,tmp ;
long long sm ;
sld(t) ;
while(t--){

    sm= 0 ;
    sld(n) ;
    sld(k);
    sld(m) ;
    for(i=0;i<n;i++) {
            sld(a[i]) ;
            c[i] = 1000 ;
            sm+=a[i] ;

    }
    for(i=0;i<m;i++){
        sld(l) ;
        sld(r) ;
        sld(ct) ;
        for(j=l-1;j<r;j++)
        {
            if(c[j]>ct)
                c[j] =ct ;

        }


    }

    for(i=0;i<=n;i++){
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

   cout<<dp[n][k]<<'\n' ;
}

return 0 ;
}
