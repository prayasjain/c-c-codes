#include <iostream>
#include <cmath>
    using namespace std;
    int a,b,k,c,d,e,q,s,x,i,p,g,f;
    float n;
    bool isprime(int z)//to check if z is prime
    {
    f=1;
    n=sqrt(z);
    if((z%2)==0)//check for 2 separately to improve efficiency
    {
    f=0;
    }
    else
    {
        for(s=3;s<n;s=s+2)//increase by 2 as we have checked for 2 separately
    {
    if((z%s)==0)
    {
    f=0;
    break;
    }
    }
    }
    return f;
    }
    int reverse1(int x)
    {
        q=0;
    for(e=0;e>=0;e++)
    {
    q=q*10+(x%10);
    x=x/10;
    if(x==0)
    break;
    }
    return q;
    }
    int main()
    {
        cin>>a;
       p=0;
       if(a%2==0)//check for 2 separately to improve efficiency
       a=a+1;
        for(i=a;i>p;i=i+2)//increase by 2 as we have checked for 2 separately
        {
        if((i==reverse1(i))&&(isprime(i)==1))
        {
        p=i;
        break;
        }
        }
        cout<<p ;
    }
