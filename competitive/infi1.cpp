

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
long long t ,n,x1,y1,x2,y2,x3,y3,z,i,j,k ,l,m,p,f,a ;
slld(t) ;
while(t--){
    slld(x1) ;
    slld(y1) ;
    slld(x2) ;
    slld(y2) ;
    slld(x3) ;
    slld(y3) ;
    k=gcd(abs(x1-x2),abs(y1-y2))+gcd(abs(x1-x3),abs(y1-y3))+gcd(abs(x3-x2),abs(y3-y2)) ;
    a=abs(x1*(y2-y3)+y1*(x3-x2)+x2*y3-y2*x3) ;
    f=(a-k+2)/2 ;
    plldn(f) ;
}

return 0 ;
}
