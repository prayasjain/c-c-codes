
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
#define inf INFINITY
//getline(cin, my_string, '\n');
long long w[maxn],dist[maxn];
int visited[maxn];
vector<long long> adj[maxn] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,e,cur ;

slld(n) ;
FOR(i,n)
slld(w[i]);
slld(e) ;
FOR(i,e){
slld(x);
slld(y);
adj[x].pb(y) ;
}
long long s=0 ;
FOR(i,n)
dist[i]=inf ;
dist[s]=0 ;
FOR(i,n)
visited[i]=0;
long long ans=0 ;
FOR(i,n){
m=inf ;
cur=-1 ;
FOR(j,n){
    if(dist[i]<m&&visited[i]==0){
        cur=i;
        m=dist[i] ;
    }

}

visited[cur]=1 ;
FOR(j,adj[cur].size()){
    x=adj[cur][j];
    if(dist[x]>dist[cur]+w[x]&&visited[x]==0)
        dist[x]=dist[cur]+w[x] ;
}
}
FOR(i,n)
plldn(dist[i]);
return 0 ;
}
