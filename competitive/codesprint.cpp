

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100003
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline()
long long fact[400010];
long long inv[400010];

long long bin_pow(long long o, long long s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    long long d = bin_pow(o, s/2);
    d = (d  * d) % mod;
    if (s % 2 == 1)
        d = (d  * o) % mod;
    return d;
}

long long C(int n, long long k) {
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

long long p,q,r,s ;
int main(){

    slld(p) ;
    slld(q) ;
    slld(s) ;
    slld(r) ;
    long long e ;
    e=max(p,q) ;
    e=max(e,r) ;
    e=max(e,s) ;
    pre(3*e) ;
    long long temp=0 ;
    if(q==r){
            if(q>=1){
            temp= (C(p+q,q) *C(s+q-1,q-1) )%mod ;
            temp =temp + (C(s+q,q)*C(p+q-1,q-1))%mod ;
            temp = temp%mod ;
            }
    }
    else if(q==(r+1)){
            if(q>=1){
                temp =( C(p+q-1,q-1)*C(s+q-1,q-1))%mod ;
            }

    }
    else if(q==(r-1)){

        temp = (C(p+q,q)*C(s+q,q) )%mod ;
    }
    else
        temp =0 ;
    if(q==r&& q==0 &&s==0){
        temp= 1;
    }
    if(q==r&& q==0 &&p==0){
        temp= 1;
    }

    plldn(temp) ;
    return 0 ;
}
