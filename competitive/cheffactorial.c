#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define plld(x) printf("%lld\n",x)
int main(){
    long long t,n,i,x,c ;
    slld(t) ;
    while(t--){
        slld(n) ;
        i=1 ;
        c=0;
        if(n==0)
        {

            printf("1\n");
            continue ;
        }
        while(pow(5,i)<=n){
                c=c+(n/pow(5,i)) ;
                i++ ;

        }
        plld(c);




    }
return 0 ;}
