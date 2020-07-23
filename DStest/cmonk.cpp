

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

#define mod 1000000007
long long gcd(long long a,long long b){
    if(b>a) return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}

int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m=1e9+7,p,f,g,ans ;
slld(n) ;
g=0 ;
f=1 ;
FOR(i,n){
    slld(x) ;
    g=gcd(g,x) ;
    f=(f*x)%m ;
}
ans=1;
while(g!=0){
    if(g%2!=0){
        ans=(ans*f)%m ;
    }
    g=g/2 ;
    f=(f*f)%m ;
}
plldn(ans) ;
return 0 ;
}

