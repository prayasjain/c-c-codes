

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
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
#define bitcount __builtin_popcountll
#define ll long long

#define mod 1000000007
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;
long long a[maxn],b[maxn] ;
long long dp1[maxn],dp2[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
slld(t) ;
FOR(i,n){
slld(a[i]) ;
}
FOR(i,n){
slld(b[i]) ;
}
dp1[0]=0 ;
dp2[0]=0 ;
dp1[1]=0 ;
dp2[1]=0 ;
FOR(i,n){
if(i%2==0)
    {
        dp1[0]+=a[i] ;
        dp2[0]+=b[i] ;
    }
    else{
            dp1[1]+=a[i] ;
        dp2[1]+=b[i] ;

    }
}
for(i=2;i<n;i++){
    dp1[i]=dp1[i-2]-a[i-2] ;
    dp2[i]=dp2[i-2]-b[i-2] ;
}
long long ans=0 ;
while(t--){
    slld(x) ;
    slld(y) ;
    slld(z) ;
    y=y-1;
    z=z-1 ;
    if(x==1){
        if((z-y)%2==0){
            ans=dp1[y]-dp1[z+2]+dp2[y+1]-dp2[z+1] ;
        }
        else {
            ans= dp1[y] - dp1[z+1] + dp2[y+1] - dp2[z+2] ;
        }

    }
    else {
            if((z-y)%2==0){
            ans=dp2[y]-dp2[z+2]+dp1[y+1]-dp1[z+1] ;
        }
        else {
            ans= dp2[y] - dp2[z+1] + dp1[y+1] - dp1[z+2] ;
        }
    }
    plldn(ans) ;

}
return 0 ;
}
