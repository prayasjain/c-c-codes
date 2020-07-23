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
int a[maxn],v[maxn] ;
int main(){
//std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,p,f,c ;
sd(t) ;
while(t--){

    sd(n) ;
    for(i=1;i<=n;i++)
        sd(a[i]) ;
    for(i=1;i<=n;i++)
        v[i]=0  ;
    v[1]=1 ;
    x=1 ;
    p=1 ;
    c=0 ;
    while(p<n){
        y=a[x] ;
        if(v[y]==0){
            x=y ;
            v[y]=1 ;
            //v[x]=1 ;
            p++ ;
        }
        else {
            c++ ;
            //v[y]=1 ;
            //v[x]=1 ;
            for(i=1;i<=n;i++){
                if(v[i]==0){
                    x=i ;
                    break ;
                }
            }
            //x++ ;
            v[x]=1 ;
            p++ ;
        }

    }
    pdn(c) ;

}
return 0 ;
}
