#include<stdio.h>
#define slld(x) scanf("%lld",&x)
int main(){
 long long t,x,y,k,n,c,p,f ;
 slld(t) ;
 while(t--){
        f=0 ;
    slld(x) ;
    slld(y) ;
    slld(k) ;
    slld(n) ;
    if(y>=x){
        printf("LuckyChef\n") ;
        f=1 ;
    }
    while(n--){
       slld(p) ;
       slld(c) ;
       if(f==0&&p>=(x-y)&&k>=c){
        f=1 ;
        printf("LuckyChef\n") ;

       }
    }
    if(f==0)
        printf("UnluckyChef\n") ;
 }
return 0 ;}
