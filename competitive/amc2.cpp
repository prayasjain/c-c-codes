

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
    slld(k) ;
    bool v[n+1];
    for(int i=0;i<=n;i++)
        v[i]=true;
    if(k>n/2){
        printf("-1\n") ;
    }
    else {
        int x=0;
        for(int i=1;i<=(n/(2*k));i++)
        {
            for(j=1;j<=k&&x<n;x++,j++)
            {
                cout<<j+(k*i);
            }
            for(j=1;j<=k&&x<n;x++,j++)
            {
                cout<<j+(k*(i-1));
            }

        }

        printf("\n") ;
    }

}
return 0 ;
}
