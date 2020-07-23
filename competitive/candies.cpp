
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
int a[maxn],b[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
int t ,n,y,z,i,j,k ,l,m,p,f ;
long x;
sd(n);
FOR(i,n){
    sd(a[i]) ;
    b[i]=1 ;
}

for(i=1;i<n;i++){
    if(a[i]>a[i-1])
        b[i]=b[i-1]+1 ;
}
for(i=n-2;i>=0;i--){
    if(a[i]>a[i+1])
        b[i]=max(b[i+1]+1,b[i]) ;
}

x=0 ;
for(i=0;i<n;i++)
    x+=b[i] ;
pld(x) ;
return 0 ;
}
