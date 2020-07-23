

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
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline()

long long gcd(long long a,long long b){
    if(b>a) return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}

long long a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long  g,t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
slld(t) ;
FOR(i,n){
    slld(a[i]) ;
}
sort(a,a+n) ;
if(n!=1){
    g=(a[1]-a[0]) ;
    for(i=2;i<n;i++){
        g=gcd(g,a[i]-a[0]) ;
    }
}

while(t--){
    slld(k) ;
    if(n==1){
        plldn(a[0]+k) ;
    }
    else
        plldn(gcd(g,a[0]+k)) ;
}
return 0 ;
}
