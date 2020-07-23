
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  70001
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
long a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
int t,n,i ;
int x ;
char cor[maxn] ,chef[maxn] ;
sd(t) ;
long f=0 ;
while(t--){


    sd(n) ;


    ss(cor) ;
    ss(chef) ;
   // psn(cor) ;
   // psn(chef) ;

    for(i=0;i<=n;i++)
        sld(a[i]) ;

    x=0 ;
    for( i=0;i<n;i++){
        if(cor[i]==chef[i])
            x++ ;
    }

    f=0 ;
    if(x==n){
        f=a[n] ;

    pldn(f) ;
     continue ;
    }
    for( i=0;i<=x;i++){
        f=max(f,a[i]) ;
    }
    pldn(f) ;

}
return 0 ;
}
