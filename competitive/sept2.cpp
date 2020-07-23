

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
//std::ios_base::sync_with_stdio (false);
long long n ;
int m,a[maxn],t,i,lp,rp,ans,t1,t2;
sd(t);
while(t--){
    sd(n) ;
    sd(m) ;
    FOR(i,m)
        sd(a[i]) ;
    sort(a,a+m) ;
    lp=0;
    rp=m-1 ;
    ans=0 ;
    for(i=0;i<m;i++){
        if(lp<rp)
        {
            if(a[lp]>0)
            {
                if(a[lp]<rp-lp)
                {
                    ans+=a[lp];
                    rp=rp-a[lp] ;
                    lp++ ;
                }
                else if(a[lp]==rp-lp){
                    ans+=a[lp];
                    cout<<ans<<"\n" ;
                    break ;
                }else {
                    ans+=rp-lp ;
                    cout<<ans<<"\n" ;
                    break ;

                }

            }
        }
        if(lp==rp){
            cout<<ans<<"\n" ;
            break ;
        }
    }
}

return 0 ;
}
