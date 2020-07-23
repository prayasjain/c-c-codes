#include<stdio.h>
#include<math.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
int main(){
int t ;
long long n,i,sum ;
sd(t) ;
while(t--){
    slld(n) ;
    i=1 ;
    sum=0 ;
    while(i<sqrt(n)){
        if(n%i==0){
           sum=sum+i+(n/i)  ;
        }
        i++ ;
    }
    if(i*i==n)
        sum+=i ;
    printf("%lld\n",sum) ;
}
return 0 ;
}

