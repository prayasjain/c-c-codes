
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
long x[maxn],y[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
int t ,n,z,i,j,k ,m,p,f ;
long l,maxx=0,x1,y1,curr  ;
sd(n) ;
sd(m) ;
sld(l) ;
for(i=0;i<n;i++)
{
    sld(x[i]);
    sld(y[i]) ;
}
while(m--){
    sld(x1);
    sld(y1) ;
    curr=0 ;
    for(i=0;i<n;i++){
        if(x1>=x[i]&&x1<=(x[i]+l)&&y1>=y[i]&&y1<=(y[i]+l)){
            curr++ ;

        }
    }
    maxx=max(curr,maxx) ;
}
cout<<maxx ;
return 0 ;
}
