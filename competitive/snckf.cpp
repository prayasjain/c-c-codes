
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n) for( long i=0;i<n;i++)
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

long long t,s ,n,x,y,z,i,j,k ,l,m,p,f ;
vector<long long> adj[60] ;


long long ans= 0 ;

long long fact[60] ;
long long inv[60] ;
const long long mod = 1e9+7;

long long bin_pow(long long o, long long s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    long long d = bin_pow(o, s/2);
    d = (d  * d) % mod;
    if (s % 2 == 1)
        d = (d  * o) % mod;
    return d;
}

long long C(long long n, long long k) {
    long long res = 1;
    res = (res  * fact[n]) % mod;
    res = (res  * inv[k]) % mod;
    res = (res  * inv[n-k]) % mod;

    return res;
}
void pre(long long n){

    fact[0] = inv[0] = 1;
    for(long long i = 1; i <= n; ++i) {
            fact[i] = (fact[i-1]  * i) % mod;
            inv[i] = bin_pow(fact[i], mod-2);
}
}




 void DFS(long long node ,long long ncol,long long visited[],long long vc ){
	long long v ;
	long long u=node  ;
	long long tflag=0 ;
	long long ncolold =ncol ;
	long long vcold =vc ;
	std::vector<long long> vtemp;

	for(long long pj=0;pj<k-ncol+1;pj++){
		if(node==1 &&pj>adj[u].size())
			break  ;
		if(pj>adj[u].size()-1)
			break ;
	for(long long j=0;j<adj[u].size();j++){
		
		v= adj[u][j] ;
		if(visited[v]==1)
			continue ;
		tflag=1 ;
		visited[v]=1 ;
		vtemp.pb(v) ;
		//DFS(v,col,colors,ncol) ;
		DFS(v,pj+ncol,visited,++vc) ;
		
	}
	


	vc=vcold ;
	for(int abc=0;abc<vtemp.size();abc++){
		visited[vtemp[abc]]= 0;
	}

	}
	for(long long j=0;j<adj[u].size();j++){
		v= adj[u][j] ;
		visited[v]=1 ;
	}
	long long sm = 0;
	for(long long vco=0;vco<n;vco++){
		sm=sm+visited[vco] ;
	}
	if(sm==n){
		for(long long ncoli=ncol;ncoli<=k;ncoli++)
		ans+=(ans + fact[ncoli]*C(k,ncoli)%mod)%mod ;
	}


}

int main(){
	std::ios_base::sync_with_stdio (false);
	pre(55) ;
	//plldn(C(4,2)) ;
	long long visited[60] ;
	slld(t) ;
	while(t--){
		long long colors[60] ;		
		slld(n) ;
		slld(k) ;
		for(i=1;i<=n;i++){
			adj[i].clear() ;
			ans= 0;
			visited[i]= 0;
		}
		for(i=1;i<=k;i++){
			colors[i]=0 ;
		}
		for(i=0;i<n-1;i++){
			slld(x) ;
			slld(y) ;
			adj[x].pb(y) ;
			adj[y].pb(x) ;
			
		}
		colors[1] =1 ;
			
			for(long long j=1;j<=n;j++){
				visited[j]=0;
			}
			visited[1]=1 ;

			DFS((long long)1,(long long)1,visited,(long long)1) ;
			colors[i]=0 ;
			
		plldn(ans) ;

	}
	return 0 ;
}
