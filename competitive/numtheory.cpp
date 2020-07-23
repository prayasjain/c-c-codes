

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

long long de, xe, ye;
void extendedEuclid(long long A, long long B) {
    if(B == 0) {
        de = A;
        xe = 1;
        ye = 0;
    }
    else {
        extendedEuclid(B, A%B);
        long long temp = xe;
        xe = ye;
        ye = temp - (A/B)*ye;
    }
}


long long power(long long x, long long p , long long m){
    if(p==1)
        return x%m ;
    if(p==0)
        return 1 ;
    long long temp= power(x,p/2,m) ;
    if(p%2)
        return (temp*temp*x)%m;
    return (temp*temp)%m;

}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,a,b ;
slld(t);
while(t--){
    slld(a);
    slld(b) ;
    slld(x);
    if(b>=0){
        plldn(power(a,b,x)) ;
    }
    else{
        extendedEuclid(a, x);
        if(xe<0)
            xe+=x;
        plldn(power(xe,b,x)) ;
    }
}

return 0 ;
}

