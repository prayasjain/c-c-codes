//(a^b)%mod

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
#define pb(x) push_back(x)

#define mod 1000000007
long long mod_fun(long long a,long long b,long long m){
    if(a%m==0)
        return 0 ;
    long long ans=1 ;
    while(b>0){
        if(b%2==1){
            ans=(ans*(a%m))%m ;
        }
        b=b/2 ;
        a=(a*a)%m ;
    }
    return ans ;

}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
cout<<mod_fun(2,mod-2,mod);
return 0 ;
}
