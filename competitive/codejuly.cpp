#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
 long a[100001],c[100001] ;
 long long dp[100001][501] ;

long long max(long long a, long long b) { return (a > b)? a : b; }
long  long getval(long long i ,long long j ){

    if(i==0||j==0)
        return 0 ;
    if(dp[i][j]!=-1) return dp[i][j] ;
    if(j>=c[i-1])
    {
        dp[i][j]=max(getval(i-1,j-c[i-1])-a[i-1],getval(i-1,j)) ;
        return dp[i][j] ;

    }
    else {
            dp[i][j] = getval(i-1,j) ;
            return dp[i][j];

    }


}

int main(){
 long t ,n,x,y,z,i,j,k ,l,m,p,r,ct,tmp ;
long long sm ;
sld(t) ;
while(t--){

    sm= 0 ;
    sld(n) ;
    sld(k);
    sld(m) ;

    memset(dp, -1, sizeof(dp) );

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


    printf("%lld\n",getval(n,k)+sm) ;

}
return 0 ;
}
