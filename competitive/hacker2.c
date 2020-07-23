#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
long long s ;
int main(){
long long fun (long long x ,long long y , long long z)
{
    if (y==0)
        return 1 ;
    if (y==1)
        return x%z ;
    s=fun(x,y/2,z)%z ;
    return (((s*s)%z)*(fun(x,y%2,z)%z))%z ;
}

long long t ,a,m ,x;

slld(t) ;
while(t--){
    slld(a) ;
    slld(m) ;

    x=fun(a,(m-1)/2,m)%m ;
    if(x==1)
        printf("YES\n") ;
    else
        printf("NO\n") ;
}

return 0 ;
}

