

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100009
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
long long a[maxn],b[maxn];
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
slld(k) ;
FOR(i,n)
slld(a[i]);
FOR(i,n)
slld(b[i]) ;
FOR(j,k){
    m=0 ;
    FOR(i,n){
        if(a[i]*b[i]>a[m]*b[m]){
            m=i ;
        }

//        if(a[i]*b[i]==a[m]*b[m]&&a[i]<a[m]){
//            m=i ;
//        }
    }
    if(a[m]>0)
    a[m]-- ;
}
FOR(i,n){
plld(a[i]) ;
ps(" ");
}

return 0 ;
}
