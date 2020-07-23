#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define plld(x) printf("%lld\n",x)
int main(){
    long long n,k,c=0,p ;
    slld(n);
    slld(k) ;
    while(n--){
            slld(p);
            if(p%k==0)
                c++ ;

    }
    plld(c);
return 0 ;}
