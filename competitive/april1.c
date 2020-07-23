#include<stdio.h>

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
int main(){
int t ;
long n,cnt,i ;
long long a,b,c ;
sd(t) ;
while(t--){
    sld(n) ;
    //printf("%ld",n) ;
    cnt=0 ;
    if(n==1){
        slld(a) ;
        printf("0\n");
    }
    else if (n==2){
        slld(a) ;
        slld(b) ;
        if(a!=b)
            printf("2\n") ;
        else
            printf("0\n") ;
    }
    else{
    for(i=0;i<n;i++){
        if(i==0)
        slld(a) ;

        else
            if(i==1){
            slld(b) ;
            if(b!=a)
                cnt++ ;
        }
        else
        if(i==2){
            slld(c) ;
            if(a!=b || b!=c)
                cnt++ ;

        }
        else{
            a=b;
            b=c ;
            slld(c) ;
            if(a!=b || b!=c)
                cnt++ ;
        }

    }
    if(c!=b)
        cnt++ ;
    printf("%ld\n",cnt) ;
    }

}
return 0 ;
}
