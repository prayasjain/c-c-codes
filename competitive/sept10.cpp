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

float pow2 (int x ,int y) {
    return (x*x)*(x*x) ;
}
int main(){
std::ios_base::sync_with_stdio (false);
long n,q,i,j,k ;
int x[1000001],y[1000001],z[1000001] ,a,b,c,d;
float ans=0.00 ;
sld(n) ;
sld(q) ;
FOR(i,n){
    sd(x[i]) ;
    sd(y[i]) ;
    sd(z[i]) ;
}
while(q--){
    sd(a) ;
    sd(b) ;
    sd(c) ;
    sd(d) ;
    ans=0.00 ;
    FOR(j,n){
        FOR(k,n){
           // if(j!=k)
              //  ans+=fabs(a*(x[j]-x[k])+b*(y[j]-y[k])+c*(z[j]-z[k])+d)/(n*(n-1)*sqrt((pow2((x[j]-x[k]),4)+pow2((y[j]-y[k]),4)+pow2((z[j]-z[k]),4)))) ;
            ans=ans+1 ;
        }
    }
    printf("%lf",ans) ;
}
return 0 ;
}
