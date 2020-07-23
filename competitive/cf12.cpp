#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)

int gcd(int m, int n)
{
    int r;

    /* Check For Proper Input */
    if((m == 0) || (n == 0))
        return (m+n);
    else if((m < 0) || (n < 0))
        return -1;

    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(true);

    return n;
}


int main(){

long long t ,x,y,z,i,j,k ,l,m,p ,a,b,n ;
slld(a) ;//3
slld(b) ;//5
slld(n) ;//9
while(1)
{

    x=gcd(a,n) ;
    n=n-x ; //n=6 4

    if(n<0)
    {
        printf("1") ;
        break ;
    }
    x=gcd(b,n) ;
    n=n-x ;//5 3

    if(n<0)
    {
        printf("0") ;
        break ;
    }

}
return 0 ;
}
