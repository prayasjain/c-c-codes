

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
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
long long a[50001],b[50001],c[100002] ;
bool objcmp(long long a , long long b){
    return a>b ;
}

int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--){
    slld(n) ;
    slld(m) ;

    FOR(i,n)
    slld(a[i]) ;

    FOR(i,m)
    slld(b[i]) ;
    i=0 ;j=0 ;k=0 ;
    while(i!=n&&j!=m){
        if(a[i]>b[j])
            c[k++]=a[i++] ;
        else
            c[k++]=b[j++] ;
    }
    for(;i<n;i++)
        c[k++]=a[i] ;
    for(;j<m;j++)
        c[k++]=b[j] ;
    FOR(i,n+m){
        plld(c[i]) ;
        ps(" ");
    }
    psn("") ;
}
return 0 ;
}
