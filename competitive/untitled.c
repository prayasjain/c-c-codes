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

int i,n,m ;
int c[40] ;    
vector<int> adj[40] ;
int adj_mat[40][40] ;

long long feasible(long long way){

    int arr[n] ;
    for(int i=0;i<n;i++){
        arr[i]=way%2 ;
        way=way/2 ;
    }
    vector<int> nodes ;
    for(int i=0;i<n;i++){
        if(way[i]==1)
            nodes.pb(i) ;
     }
    //can check for way=0
     long long tmp = 0 ;
    for(int i=0;i<nodes.size();i++){
        for(int j=0;j<nodes.size();j++){
            if(i==j)
                continue ;
            int x = nodes[i] , y=nodes[j] ;
            if(adj_mat[x][y]==1)
                return (long long)-1 ;
        }
    }
    for(i=0;i<nodes.size();i++){
        tmp+=c[nodes[i]] ;
    }
    return tmp ;
}

int main(){
    std::ios_base::sync_with_stdio (false);
    sd(n) ;
    sd(m) ;
    long long ways = 1<<n ;
    FOR(i,n){
        sd(c[i]) ;
    }
    int x,y ;
    FOR(i,n){
        FOR(j,n){
            adj_mat[i][j]=0 ;
        }
    }
    FOR(i,m){
        sd(x) ;
        sd(y) ;
        x=x-1 ;
        y=y-1 ;
        adj[x].pb(y) ;
        adj[y].pb(x) ;
        adj_mat[x][y]=1 ;
        adj_mat[y][x]=1 ;
           
    }
    long long ans=0,count =0 ;
    for(long long way=1;way<ways;way++){
        long long ret = feasible(way) ;
        if(ret!=-1&&ret>ans){
            ans=ret ;
            count=1 ;
        }else if(ret!=-1&& ret==ans){
            count++ ;
        }

    }    
    printf("%lld %lld\n",ans,count);

    return 0 ;
}