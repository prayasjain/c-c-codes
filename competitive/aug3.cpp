

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


 long gcd( long a, long b){
    if(b>a) return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}
int main(){
std::ios_base::sync_with_stdio (false);
 long t ,n,x,y,z,i,j,k ,l,m,p,f,ans ;
sld(t) ;
while(t--){
    sld(x) ;
    sld(y) ;
    f=gcd(x,y) ;
    ans=0;
    ans=(long)log2(y/f)+(long)floor(log2(x/f));
    pldn(ans) ;
}
return 0 ;
}


