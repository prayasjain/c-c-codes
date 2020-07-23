
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
char s[maxn] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;

ss(s) ;
slld(t) ;
while(t--){
    slld(m) ;
    slld(l) ;
    p=0 ;
    for(i=0;i<strlen(s);i++){
        x=0 ;
        f=1%m ;
        for(j=i;j>=0;j--){
            x=(x+(((s[j]-'0')%m)*f)%m)%m ;
            f=(f*10)%m ;
            if(x==l){
                p++ ;
                //cout<<i<<" "<<j<<p<<"\n" ;
            }

        }
    }
    plldn(p) ;
}
return 0 ;
}
