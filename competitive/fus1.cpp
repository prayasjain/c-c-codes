

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

int main(){
std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,p,f,a[maxn],sm,ans ;
sd(t) ;
while(t--){

    sd(n);
    sm=0 ;
    ans=0 ;
    FOR(i,n){
    sd(a[i]) ;
    sm+=a[i] ;
    }
    if(sm%n!=0){
        pdn(-1) ;
    }
    else {
        sm=sm/n ;

        FOR(i,n){
            ans+=abs(sm-a[i]) ;

        }
        //ans=ans/2 ;
        pdn(ans) ;
    }
}
return 0 ;
}

