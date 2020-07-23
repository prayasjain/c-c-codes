
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
long long a[maxn] ,f[129],ans,temp[129] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(n) ;
FOR(i,n){
slld(a[i]) ;

}
FOR(i,n){
    FOR(j,128){
    temp[j]=0 ;
    }
    FOR(j,128){
        temp[a[i]^j]=(temp[a[i]^j]+f[j])%mod ;
    }


    FOR(j,128){
    f[j]=(f[j]+temp[j])%mod ;
    }

    f[a[i]]++ ;
}
ans=0 ;

FOR(i,128){
ans= (ans+((f[i]%mod)*((f[i]-1)%mod)*500000004)%mod)%mod ;
plld(f[i]) ;
ps(" ") ;

}
psn(" ") ;
if(ans<0)
    ans=ans+mod ;
plldn(ans) ;
return 0 ;
}
