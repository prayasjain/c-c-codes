

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
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
long long a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--){
    slld(n) ;
    slld(x) ;
    FOR(i,n)
    slld(a[i]) ;
    long long st=-1,e=-1,sm=0 ;
    f=0 ;
    FOR(i,n){

        if(sm==0){
            st=e=i ;
            sm=a[i] ;
        }
        else{
            sm+=a[i] ;
            e++ ;
        }
        while(sm>x){
            if(st==e){
                st=e=-1;
                sm=0 ;
                break ;
            }
            else{
                sm=sm-a[st++] ;
            }
        }
        if(sm==x){
            f++ ;
            break ;
        }

    }
    if(f==1)
        psn("YES") ;
    else
        psn("NO") ;
}

return 0 ;
}
