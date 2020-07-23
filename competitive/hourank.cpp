
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
long long a[maxn],ans ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,s,mx,flg,ans ;
slld(n) ;
m=1<<n ;
ans=0 ;
for(i=0;i<=m;i++){
    x=i ;
    f=-1 ;
    while(x!=0){
        t=x%2 ;
        x=x/2 ;
        if(t==1&& f==-1)
            f=0;
        else if(t==0&& f!=-1)
            f++ ;
        else if(t==1&& f==0)
            f=0 ;
        else if(t==1&&f>0){
            ans++ ;
            f=0 ;
        }

    }
}
plldn(ans) ;
return 0 ;
}
