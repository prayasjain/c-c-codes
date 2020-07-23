

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
long long t ,n,x,y,z,i,j,k ,l,m,p,f,w,b ;
slld(t) ;
slld(w) ;
slld(b) ;
k=min(w,b) ;
l= (w*b)/gcd(w,b) ;

p=k-1 ;

if(t<l){
    m=gcd(p,t) ;
    p=p/m ;
    t=t/m ;
    printf("%lld/%lld",p,t) ;
}
else {
    x=t/l ;
    p+=k*x ;
    y=x*l ;
    y=y+k-1 ;
    if(y>t)
        p=p-(y-t) ;
    m=gcd(p,t) ;
    p=p/m;
    t=t/m ;
    printf("%lld/%lld",p,t) ;
}
return 0 ;
}

