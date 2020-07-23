

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
#define pb(x) push_back(x)
#define mod 1000000007
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;
long long m = 0,n ;
vector<long long> wadj[maxn] ;
vector<long long> adj[maxn] ;
long long visited[maxn] ;
long long dfs(long long strt) {

    long long t=strt ;

    if(visited[t]==1)
        return 0 ;
    visited[t]=1 ;
    long long mx=0,mx2=0,tmp ;
    for(int i=0;i<adj[t].size();i++){
        if(visited[adj[t][i]]==0){
            tmp=dfs(adj[t][i])+wadj[t][i] ;
            //plldn(tmp) ;
            visited[adj[t][i]]=1 ;
            if(tmp>mx){
                mx2=mx ;
                mx=tmp;

            }
            else if(tmp>mx2){
                mx2=tmp ;
            }

        }

        }
        if(m<mx2+mx)
            m=mx2+mx ;
        return mx ;



}

int main(){
    long long x,y,z,i ;
std::ios_base::sync_with_stdio (false);
long long tc ;
slld(tc) ;
while(tc--){
        slld(n) ;
        for(i=0;i<=n;i++){
            visited[i]=0 ;
            adj[i].clear();
            wadj[i].clear() ;
        }
        m=0 ;
    FOR(i,n-1){
    slld(x);
    slld(y);
    slld(z) ;
    adj[x].pb(y);
    adj[y].pb(x);
    wadj[x].pb(z);
    wadj[y].pb(z);

    }
    i=dfs(1);
    if(m<=100)
        ps("0") ;
    else if(m>100&&m<=1000)
        ps("100");
    else if(m>1000&&m<=10000)
        ps("1000");
    else
        ps("10000");
    ps(" ");
    plldn(m) ;

}
return 0 ;
}
