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
long long fun(long long x){
    if(x<5)
        return 0 ;
    else
        return x/5 + fun(x/5);
}
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--){
    slld(n) ;
    long long beg=0,ed=5*n ;
    long long mid=(beg+ed)/2 ;
    while(beg<ed){
        if(fun(mid)<n){
            beg=mid+1 ;
        }
        else
            ed=mid ;
        mid=(beg+ed)/2 ;
    //cout<<beg<<" "<<mid<<" "<<ed<<"\n" ;
    }
    plldn(mid) ;


}
return 0 ;
}


