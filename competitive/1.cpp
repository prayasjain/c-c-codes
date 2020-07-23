//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
long long int a[3002],b[3005];
long long int m(long long int i)
{
    long long int j=0,k=0,x,l=0;
    for(x=0;x<i;x++)
    {
        j=max(j+b[x],l);
        k=max(k,j);
    }
    return k;
}
long long int prod(long long int i,long long int j)
{
    long long int k;
    for(k=0;k<(j-i+1)/2;k++)
        b[k]=a[i+k]*a[j-k];
    return m(k);
}
int main()
{
    long long int n,i;
    long long int j,k,l,s,max1=0;
    slld(n);
    for(i=0;i<n;i++)
        slld(a[i]);
    max1=prod(0,n-1);
    for(i=0;i<n;i++)
    {
        j=prod(i,n-1);
        if(j>max1)
            max1=j;
        j=prod(0,i);
        if(j>max1)
            max1=j;
    }
    printf("%lld\n",max1);
    return 0;
}
