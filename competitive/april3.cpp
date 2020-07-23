#include<stdio.h>
#include<math.h>

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)


#include<iostream>
using namespace std;
#include<vector>

/* This function calculates power of p in n! */
 unsigned long long  countFact(unsigned long long  n, unsigned long long   p)
{
    int k=0;
    while (n>=p)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}

/* This function calculates (a^b)%MOD */
unsigned long long pow(unsigned long long  a, unsigned long long  b, unsigned long long  MOD)
{
    unsigned long long x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}

/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
unsigned long long InverseEuler(unsigned long long  n, unsigned long long MOD)
{
    return pow(n,MOD-2,MOD);
}

unsigned long long factMOD(unsigned long long n, unsigned long long MOD)
{
    unsigned long long res = 1;
    while (n > 0)
    {
        for (int i=2, m=n%MOD; i<=m; i++)
            res = (res * i) % MOD;
        if ((n/=MOD)%2 > 0)
            res = MOD - res;
    }
    return res;
}

unsigned long long C(unsigned long long n, unsigned long long r, unsigned long long MOD)
{
    if (countFact(n, MOD) > countFact(r, MOD) + countFact(n-r, MOD))
        return 0;

    return (factMOD(n, MOD) *
            ((InverseEuler(factMOD(r, MOD), MOD) *
            InverseEuler(factMOD(n-r, MOD), MOD)) % MOD)) % MOD;
}
int main(){
int t ;
unsigned long long n,l,r,sum ;
sd(t) ;
while(t--){
    slld(n);
    slld(l);
    slld(r);



    //for(i=1;i<=n;i++){
  //          sum=sum+a;
//            a=a*(++b)/(++c) ;
            //a=a%1000003 ;
    //        sum=sum%1000003 ;

           // if(r-l>i)

                sum=(C(r-l+n+1,n,1000003)-1)%1000003 ;
            if(sum==0)
                sum=1000003 ;
            sum-- ;

            //else
              //  sum=sum+C(r-l+i,r-l,1000003) ;


      //      }

    printf("%lld\n",sum) ;
}
return 0 ;
}

