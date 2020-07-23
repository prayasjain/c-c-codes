

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000002
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
long long bin_pow(long long o, long long s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2);
    d = (d  * d) % mod;
    if (s % 2 == 1)
        d = (d  * o) % mod;
    return d;
}
vector<long long> prime ;
long long brr[maxn] ;
void sieve() {

    long long i=2 ;
    for(i=2;i<=1000001;i++){
        if(brr[i]==1)
            continue ;
        prime.push_back(i) ;
        for(long long j=i;j<=1000001;j=j+i){
            brr[j]=1 ;
        }
    }


}

long long a[maxn] ;

void fun(long long n){
    long long i=0,c ;
    while(n!=1){
            c=0 ;
        while(n%v[i]==0){
            n=n/v[i] ;
            c++ ;
        }
        a[v[i]]+=c ;
        i++ ;
    }

}
int main(){
//std::ios_base::sync_with_stdio (false);
sieve() ;

long long t ,n,x,y,z,i,j,k ,l,m,p,f ;

slld(n) ;
fun(n) ;
slld(t) ;
while(t--){
    slld(x) ;
    fun(x) ;

}

return 0 ;
}
