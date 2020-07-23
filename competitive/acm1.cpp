#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
long long bin_pow(long long o, long long s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}
long long powr(long long o, long long s){
    if (s == 0) return 1;
    if (s == 1) return o ;
    int d = bin_pow(o, s/2);
    d = (d * 1ll * d) ;
    if (s % 2 == 1)
        d = (d * 1ll * o) ;
    return d;
}
vector<long long> v(1000000),st(5000001);
int main()
{
    long long i,t,n,maxi,c,res,j,k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        maxi=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&(v[i]));
            maxi=max(maxi,v[i]);
        }
        for(i=0;i<=maxi;i++)
            st[i]=0;
        for(i=0;i<n;i++)
            st[v[i]]++;
            res=-1;
        c=1 ;
        for(i=2;i<=maxi;i++)
        {
            if(st[i]==0)
                continue ;
                k=1;
            for(j=i;j<=maxi;j=j+i)
            {
                if(i==j)
                        k*=(powr(2,st[j])-1);

                    else if(st[j]!=0)
                        k*=(powr(2,st[j]));

                       // c=(c*bin_pow(i,bin_pow(2,st[j])))%mod;

            }
            //cout<<k;
            c*=bin_pow(i,k)%mod;
           // cout<<"*" ;

        }


            printf("%lld\n",c);


    }
    return 0;
}
