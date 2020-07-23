#include<stdio.h>
#include<math.h>
#include<algorithm>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)

long long fun(long long x,long long y){
    if(y==0)
        return 1 ;
    long long int ans =1, sq=x ;
    while(y!=0){
        if(y%2)
            ans=ans*sq ;
            sq=(sq*sq)%1000000007 ;
            y=y/2 ;
            if(ans>1000000007)
                ans=ans%1000000007 ;

    }
    return ans ;

}
using namespace std ;

long long d[100001] ;
int main(){
long long t,c ,n,x,y,z,i,j,k ,l,m,p,a[100001] ;
//for(i=0;i<100001)
slld(t) ;
while(t--){


        slld(n) ;
        for(i=0;i<n;i++){
        slld(a[i]) ;

    }
    sort(a,a+n) ;
    x=0;
    y=0 ;
    c=0 ;
    for(i=0;i<n;i++){
        if(d[i+1-1]==0){
            x=fun(2,i+1-1) ;
            d[i+1-1]=x ;
        }
        else
            x=d[i+1-1] ;
        if(d[n-i-1]==0){
            y=fun(2,n-i-1) ;
            d[n-i-1]=y ;
        }
        else
            y=d[n-i-1] ;
        x=x%1000000007 ;
        y=y%1000000007 ;
       c=c+ a[i] * (x-y) ;

       c=c%1000000007 ;
    }
    c=c%1000000007 ;
    printf("%lld\n",c) ;

}
return 0 ;
}
