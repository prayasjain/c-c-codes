

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

long long a[maxn] ;
long long find (long long x ,long long y) {
    if(x>y)
        return 1 ;
    else return pow(a[x-1],find(x+1,y)) ;

}

int main(){
std::ios_base::sync_with_stdio (false);
 long long t ,n,x,y,z,i,j,k ,l,m,p,f,b ;
slld(n) ;
for(i=0;i<n;i++)
    slld(a[i]) ;


return 0 ;
}
