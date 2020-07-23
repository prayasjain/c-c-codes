

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
vector<long long> prime ;
long long h[maxn] ;
void sieve(){
long long i=2 ;

while(i<=100001){
    if(h[i]==1){
        i++ ;
        continue ;
    }
    prime.push_back(i) ;
    for(long long j=i;j<=100001;j+=i){
        h[j]=1 ;
    }
    i++ ;
}
}
long long a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
sieve() ;
while(t--){
    m=0 ;
    slld(n) ;
    FOR(i,n){
    slld(a[i]);
    m=max(m,a[i]) ;
    }
    for(i=0;prime[i]<=m;i++){

    }
}
return 0 ;
}
