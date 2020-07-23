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
        return 0;
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
int gcdr(int m ,int n)
{
    int x = gcd(m,n) ;
    return (m*n/x) ;
}

int main(){
long long k , l ,m,n,d ,a=0,i ;
slld(k) ;
slld(l) ;
slld(m) ;
slld(n) ;
slld(d) ;
long long kl,km,kn,lm,ln,mn,klm,kln,kmn,lmn ,klmn;
kl=gcdr(k,l) ;
km=gcdr(k,m) ;
kn=gcdr(k,n) ;
lm=gcdr(l,m) ;
ln=gcdr(l,n) ;
mn=gcdr(m,n) ;
klm=gcdr(kl,m) ;
kln=gcdr(kl,n) ;
kmn=gcdr(km,n) ;
lmn=gcdr(lm,n) ;
klmn=gcdr(klm,n);

long long n1 = (d/k)+(d/l)+(d/m)+(d/n) ;
long long n2 = (d/kl)+(d/kn)+(d/km)+(d/lm)+(d/ln)+(d/mn) ;
long long n3 =(d/klm)+(d/kln)+(d/kmn)+(d/lmn) ;
long long n4 =d/klmn ;

long long ans =n1-n2+n3-n4 ;
printf("%lld",ans) ;
return 0 ;
}
