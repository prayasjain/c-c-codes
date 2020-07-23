
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n) for(long long i=0;i<n;i++)
#define pb(x) push_back(x)
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define maxn  100001

#define inv2 500000004

#define mod 1000000007



stack<long long> s;
vector<long long> visited ;

vector<long long> ins;

void DFSutil2(long long vertex, vector<long long> adj[]){
    
    visited[vertex]=1 ;
    ins.pb(vertex) ;
    FOR(i,adj[vertex].size()){
        if(!visited[adj[vertex][i]]){
            DFSutil2(adj[vertex][i], adj) ;
        }
    }
    
}
void DFSutil(long long vertex,long long v,vector<long long> adj[]){
    visited[vertex]=1 ;
    FOR(i,adj[vertex].size()){
        if(visited[adj[vertex][i]])
            continue ;
        
        DFSutil(adj[vertex][i],v,adj) ;
    }
    s.push(vertex) ;

}

void DFS(vector<long long> adj[],vector<long long> adjr[], long long v, long long e) 
{
    
    visited.resize(v) ;
    
    fill(visited.begin(),visited.end(),0) ;
    while(!s.empty())
    s.pop() ;
    for(int vertex=0;vertex<v;vertex++){
        if(!visited[vertex]){
            DFSutil(vertex,v,adj) ;
        }
    }
    fill(visited.begin(),visited.end(),0) ;
    
    long long ans= 0;
    while(!s.empty()){
        long long vertex = s.top() ;
        s.pop() ;
        if(visited[vertex])
            continue  ;
        ins.clear() ;
        DFSutil2(vertex,adjr) ;

        if(ins.size()>1)
         ans++ ;
    }
    plldn(ans) ;
}


int main(){
    std::ios_base::sync_with_stdio (false);
    long long t,v,e,x,y ;
    slld(t) ;
    while(t--){
    
        slld(v) ;
        slld(e) ;
        vector<long long> adj[v] , adjr[v] ;
        
        
        FOR(i,e){
            slld(x) ;
            slld(y) ;
            adj[x-1].pb(y-1) ;
            adjr[y-1].pb(x-1) ;
        }
        DFS(adj,adjr, v , e) ;

    }
    return 0 ;
}