#include<stdio.h>
int main()
{
    int N=0,i;
    long x;
    long long sum=0;
    int T=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        sum=0;
        for(i=0;i<N;i++)
        {
            scanf("%ld",&x);
            sum+=(i)*x;
            sum-=(N-i-1)*x;
        }
        printf("%lld\n",sum);
    }
}
