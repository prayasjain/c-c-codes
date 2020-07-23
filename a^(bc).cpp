

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
#define pb(x) push_back(x)
#define inv2 500000004
#define mod 1000000007
//getline(cin, my_string, '\n');
// x^(yz) mod m
//m is prime
long long powfun(long long x, long long y, long long m){
    if(y==0)
        return 1;
    if(y==1)
        return x%m ;
    long long t= powfun(x,y/2,m) ;
    if(y%2==0){
        return (t*t)%m ;
    }
    return (t*t*x)%m ;


}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(x) ;
slld(y) ;
slld(z) ;
slld(m) ;
x=x%m ;
y= y%(m-1) ;
z=z%(m-1) ;
t=(y*z)%(m-1);
plld(powfun(x,t,m)) ;
return 0 ;
}
