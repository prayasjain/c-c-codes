

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
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--){
    slld(n) ;
    x=0 ;
    y=0 ;
    if(n==1)
    {
        x=1 ;
        y=0 ;
    }
    else if(n==2)
    {
        x=1 ;
        y=2 ;
    }
    else if(n==3){
        x=-2;
        y=2 ;

    }
    else if(n>=4){
        x=-2 ;
        y=-2 ;
    }
    i=(n-1)/4 ;
    if(i>0)
    x+=i*(2*i+3) ;
    i=(n-2)/4;
    if(i>0)
    y+=2*i*(i+2) ;
    i=(n-3)/4 ;
    if(i>0)
    x=x-i*(2*i+5) ;
    i=(n-4)/4 ;
    if(i>0)
    y=y-2*i*(i+3) ;
    plld(x);
    ps(" ") ;
    plldn(y) ;
}
return 0 ;
}
