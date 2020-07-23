

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
long  t ,x,y,z,i,j ,l,m,p[100],f,a,b ;
int n,k ;
sd(n) ;
sd(k) ;
sld(a) ;
sld(b) ;
FOR(i,n){
    sld(x) ;
    f=1 ;
    j=2 ;
    while(x>1){
        if(x%j==0)
                f=f*j ;
        while(x%j==0){
            x=x/j ;
        }
        j++;
    }
    p[i]=f ;
}
sort(p,p+n);
for(t=1;t<=k;i++){

}
return 0 ;
}
