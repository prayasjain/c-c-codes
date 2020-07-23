#include<stdio.h>
#include<math.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)

long long gcd (long long a ,long long b){

    if(a>b)
        {
            long long t =a ;
            a=b ;
            b=t ;
        }
    if (a==0)
        return b ;
    else
        return gcd(b%a,a) ;
}
using namespace std ;
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,a,b ;
slld(t) ;
while(t--){
    slld(a) ;
    slld(b) ;

    if (a==b)
        printf("Yes\n") ;
    else
    if(a%b==0)
        printf("Yes\n") ;
    else
   {
    while(b!=1){
        x=  gcd(a,b) ;
        if(x==1){
            printf("No\n") ;
            break ;
        }
        else{
            b=b/x ;

        }

    }
    if(b==1)
        printf("Yes\n") ;
}
}
return 0 ;
}


