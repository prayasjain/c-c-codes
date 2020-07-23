

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
#define bitcount __builtin_popcountll
#define ll long long

#define mod 1000000007
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;
long long dp[500][500];
long long n,k ;
long long fun(long long a , long long b){
    if(a==0 && b!=0 ){
        dp[a][b]=1 ;
        return 1 ;
    }
    if(b==0){
        dp[a][b]=0 ;
        return 0 ;
    }
    if(a<0 || b<0)
        return 0 ;
    if(a<k || b<k){
        dp[a][b]=0 ;
        return 0 ;
    }
    if(dp[a][b]!=-1){
        return dp[a][b] ;
    }
    dp[a][b] =  fun(a,b-1) + fun(a-b,b) ;
    return dp[a][b] ;
}


int main(){

std::ios_base::sync_with_stdio (false);
long long t ,x,y,z,i,j ,l,m,p,f ;
slld(t) ;

while(t--){
    slld(n);
    slld(k) ;
    FOR(i,n+1){
        FOR(j,n+1){
            dp[i][j] = -1 ;
             if(i==0){
                dp[i][j]=1 ;
             }
             if(j==0){
                dp[i][j]=0 ;
             }
             if(j<k || i<k){
                dp[i][j]= 0 ;
             }
        }

    }
    plldn(fun(n,n)) ;


}
return 0 ;
}
