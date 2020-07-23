#include<stdio.h>
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
long long t ,n,x,y,z,i,j,k ,l,m,p ;
for(i=0;i<100;i++)
printf("%lld ",d[i]) ;
return 0 ;
}

