
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)


const long long mod = 1e9+7;
long long fact[100010];
long long inv[100010];

long long bin_pow(long long o, long long s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}

long long C(long long n, long long k) {
    fact[0] = inv[0] = 1ll;
    for(long long i = 1; i <= n; ++i) {
            fact[i] = (fact[i-1] * i) % mod;
            inv[i] = bin_pow(fact[i], mod-2);

        }

    long long res = 1;
    res = (res * 1ll * fact[n]) % mod;
    res = (res * 1ll * inv[k]) % mod;
    res = (res * 1ll * inv[n-k]) % mod;

    return res;
}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,s ;
//cout<<C(4,3);
slld(n) ;
slld(k) ;
slld(t) ;
s=0 ;

FOR(i,k){
    slld(x) ;
    s+=x ;
}
x=abs(s-t) ;
y=(x+k) ;
if(y%2!=0){
    cout<<0 ;
    return 0;
}
y=y/2 ;
if(y>k)
	cout<<0 ;
else
cout<<C(k,y) ;
return 0 ;
}
