

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define vec vector
#define maxn  100004
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#define bitcount __builtin_popcountll
#define ll long long
#define mod 1000000007

//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s)
int prime[1000000] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p ;
//freopen("input4.in","r",stdin) ;
//freopen("output.txt","w",stdout) ;
slld(t) ;
ps("Case #1");
//plld(1) ;
psn(":") ;

    slld(n) ;
    slld(j) ;
    FOR(i,1000000)
        prime[i]=0;
    for(i=2;i<1000000;i++){
        if(prime[i]==0){
            prime[i]=2 ;
        }
        for(k=2;k<(1000000)/i;k++)
            prime[k*i]=1 ;
    }
    FOR(i,100)
        pdn(prime[i]) ;


return 0 ;
}
