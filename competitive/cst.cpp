

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

long long fun(long long n){

    if(n%2==1)
        return fun(n-1)+1 ;
    if(n==2)
        return 1 ;
    long long x= (n/2)+2 ;
    long long t= fun(n/2) ;
    long long y ;

    y=((n-x)/2)+1 ;
    if(t<=y){
        return x+ 2*(t-1) ;
    }
    else
    {
        t=t-y ;
        return 2*t -1 ;
    }

}
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--){
    slld(n) ;
    plldn(fun(n)) ;
}
return 0 ;
}

