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
 long t ,n,x,y,z,i,j,k ,l,m,p,f ;
sld(t) ;
while(t--){
    sld(n) ;
    if(n%2==0)
    {
        x=n/2 ;
        y=x+1 ;
        while(x>0){
            pld(x) ;
            ps(" ") ;
            pld(y) ;
            ps(" ") ;
            x-- ;
            y++ ;
        }
    }else{
        x=(n+1)/2 ;
        y=(n-1)/2 ;
        while(1){
                pld(x) ;
            ps(" ") ;
            if(y>0)
                pld(y) ;
            else
                    break ;
            ps(" ") ;
            x++ ;
            y-- ;

        }


    }
    psn("");
}

return 0 ;
}
