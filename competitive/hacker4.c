#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(t) ;
while(t--){
        slld(n) ;
        if(n%2!=0)
        {

            printf("0\n") ;
            continue ;
        }
        n=n/2 ;
        m=0 ;
        i=2 ;
        p=0 ;
        k=1 ;
        while(n>1){
                if(n%i==0)
                {
                        p++ ;
                        n=n/i ;
                }
                else{
                    if(i==2)
                    i++ ;
                    else
                        i+=2 ;

                        k=k*(p+1) ;

                        p=0 ;


                }

        }
    k=k*(p+1) ;
        printf("%lld\n",k);



}
return 0 ;
}

