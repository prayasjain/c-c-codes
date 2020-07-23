#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,f,w,a[100001] , c[100001] ,dp[102][102] ;
slld(t) ;
while(t--){


    slld(n) ;
    slld(w) ;
    for(i=0;i<n;i++)
    {
        slld(x) ;
        slld(y) ;
        a[i] =x*y ;
        slld(c[i]) ;
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=w;j++){
                if(i==0 ||j==0)
                    dp[i][j] = 0 ;
           else if(j>=c[i-1]){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-c[i-1]]+a[i-1]) ;

        }
         else
                    dp[i][j] = dp[i-1][j] ;
        }


    }
    cout<<dp[n][w]<<'\n' ;
}

return 0 ;
}
