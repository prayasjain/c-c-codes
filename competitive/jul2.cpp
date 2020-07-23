#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;
long long a[100001],c[100001] ;
long long dp[100000001]={0} ;

long long max(long long a, long long b) { return (a > b)? a : b; }
long  long getval(long long i ,long long j ){

    if(i==0||j==0)
        return 0 ;
    if(dp[i*(k+1)+j]!=-1) return dp[i*(k+1)+j] ;
    if(j>=c[i-1]) return max(getval(i-1,j-c[i-1])-a[i-1],getval(i-1,j)) ;
    else return getval(i-1,j);



}


int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,r,ct,sm,tmp ;
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
    dp[(n+1)*(k+1)]={0} ;

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



    for(i=1;i<=n;i++){

        for(j=1;j<=k;j++){

            if(j>=c[i-1]){
                if((dp[(i-1)*(k+1)+(j-c[i-1])]-a[i-1])>(dp[(i-1)*(k+1)+j]))
                    dp[i*(k+1)+j] = (dp[(i-1)*(k+1)+(j-c[i-1])]-a[i-1]) ;
                else
                        dp[i*(k+1)+j]= dp[(i-1)*(k+1)+j] ;
            }
            else
                dp[i*(k+1)+j] = dp[(i-1)*(k+1)+j] ;
        }
    }

   printf("%lld\n",dp[n*(k+1)+k]+sm) ;


}

return 0 ;
}
