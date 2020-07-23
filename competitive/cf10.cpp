#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<math.h>

int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(n) ;
p=0 ;
while(1){

    y=pow(2,p) ;
    x=5*y ;
    if(x<=n){
        n=n-x ;
        p++;
    }
    else{

        if(n==0)
            printf("Howard");
        else if(n<=y)
            printf("Sheldon");
        else if(n<=2*y)
            printf("Leonard");
        else if(n<=3*y)
            printf("Penny");
        else if(n<=4*y)
            printf("Rajesh");
        else
            printf("Howard");

        break ;

    }

}
return 0 ;
}
