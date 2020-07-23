

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
struct pt {
    int val ;
    int x ;
    int y ;


}a[1000000];
bool compare(pt a,pt b){
    return a.val<b.val ;
}
int main(){
std::ios_base::sync_with_stdio (false);
int t,n,x,y,z,i,j,k ,l,m,f ;
sd(t);
long long p ;
while(t--){
    sd(n) ;
    z=n*n ;
    for(i=0;i<z;i++){
        sd(a[i].val);
        a[i].y=i/n ;
        a[i].x=i%n ;
    }
    sort(a,a+z,compare);
    p=0 ;
    for(i=0;i<z-1;i++){
        p+=abs(a[i].y-a[i+1].y)+abs(a[i].x-a[i+1].x);
    }
    cout<<p<<"\n" ;
}
return 0 ;
}
