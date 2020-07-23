

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
long long fact[3000010];
long long inv[3000010];

long long bin_pow(long long o, long long s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    long long d = bin_pow(o, s/2);
    d = (d  * d) % mod;
    if (s % 2 == 1)
        d = (d  * o) % mod;
    return d;
}

long long C(long long n, long long k) {
    long long res = 1;
    res = (res  * fact[n]) % mod;
    res = (res  * inv[k]) % mod;
    res = (res  * inv[n-k]) % mod;

    return res;
}
void pre(long long n){

    fact[0] = inv[0] = 1;
    for(long long i = 1; i <= n; ++i) {
            fact[i] = (fact[i-1]  * i) % mod;
            inv[i] = bin_pow(fact[i], mod-2);
}
}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
pre(3000001) ;
slld(t) ;
while(t--){
    slld(m) ;
    slld(n) ;
    plldn(C(m+n-2,n-1)) ;
}
return 0 ;
}
