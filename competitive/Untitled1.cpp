#include<stdio.h>
#include<math.h>
int main()
{
 long T=0;
 long long int e,o,x;
 scanf("%ld",&T);
 while(T--)
 {
     scanf("%lld %lld",&e,&o);
     x=fabs(3*e-2*o);
     if(x%5!=0)
        printf("-1\n");
     else
        printf("%lld\n",x/5);
 }
}
