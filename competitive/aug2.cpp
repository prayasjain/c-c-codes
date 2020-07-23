

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
long t ,n,x,y,z,i,j,l,m,p,f ;
double k ;
sld(t) ;

while(t--){
    sld(x) ;
    sld(y) ;
    f=0 ;
    while(1){
            if(x==1){
                pldn((long)log2(y)+f) ;
                break ;
            }
        if(x%y==0){
            k=log2(x/y) ;
            if(ceil(k)==floor(k))
            {pldn((long)k+f) ;
            break ;
            }
            else {
                f++ ;
                x=x/2 ;
                }
        }
        else if (y%x==0)
        {
            k=log2(y/x) ;
            if(ceil(k)==floor(k)){
            pldn((long)k+f) ;
            break ;

            }
            }
        else {
            f++ ;

                x=x/2 ;
        }
    }
}

return 0 ;
}
