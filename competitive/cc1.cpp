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
long a[1000001] ;
int main(){
std::ios_base::sync_with_stdio (false);
long t ,n,x,y,z,i,j,k ,l,m,p,f ;
sld(n) ;
sld(k) ;
m=n ;
for(i=0;i<k;i++){

         sld(x);

        a[x]=1 ;
        if(x!=1)
            a[x-1]=1 ;
        if(x!=n)
            a[x+1]=1 ;
}
//pldn(m) ;
if(k==0){
    if(n%2)
    pld((n/2)+1) ;
    else
        pld(n/2);
    return 0 ;
}
p=0 ;
for(i=1;i<=n;i++){
    if(a[i]==0){
        p++ ;
        a[i]=1 ;
        if(i!=n)
            a[i+1]=1 ;
    }
}
pld(p+k);



return 0 ;
}
