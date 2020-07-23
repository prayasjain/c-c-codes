#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)


int main(){
    long long t ,x ,i ,n ;
    slld(t) ;
    while(t--){
        slld(x) ;
        i=ceil(cbrt(3*x)) ;

        if(i==0){
            printf("0\n");
            continue ;}
        while(i){
                if(i*(i+1)*(2*i+1)/6<=x)
                    {
                        printf("%lld\n",i) ;
                        break ;

                    }

                        i-- ;

        }
    }
return 0 ;
}

