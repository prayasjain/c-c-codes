

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


const int mod = 1e9+7;
int fact[100010];
int inv[100010];

int bin_pow(int o, int s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}

int C(int n, int k) {
    int res = 1;
    res = (res * 1ll * fact[n]) % mod;
    res = (res * 1ll * inv[k]) % mod;
    res = (res * 1ll * inv[n-k]) % mod;

    return res;
}
void fun(int p){
    int ans=0 ;
    while(p!=0){
        ans+=p%2 ;
        p=p/2 ;
    }
    cout<<ans<<"\n" ;


}
int main(){

int t ,n,x,y,z,i,j,k ,l,m,p,f ;
sd(t) ;
fact[0] = inv[0] = 1;
    for(int i = 1; i <= 100000; ++i) {
            fact[i] = (fact[i-1] * 1ll * i) % mod;
            inv[i] = bin_pow(fact[i], mod-2);

        }

while(t--){

    sd(n) ;
    p=0 ;

        for(i=0;i<=n/2;i++)
            p+=C(n-i,i)%mod ;
            fun(p) ;



    //cout<<p ;

}

return 0 ;
}
