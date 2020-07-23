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




vector < vector < int > > a ,visited ;
long long n,m ;
int flag =0 ;

void DFS(long long x, long long y) {
	//cout<<x<<" "<< y <<endl ;

	if(a[x][y]==0){

		return ;
	}
	if(visited[x][y]){

		return ;
	}
	visited[x][y]=1 ;

	if(x==n-1 && y==m-1){
		flag=1 ;
		return ;
	}
	
	if(x+1<n){
		DFS(x+1,y) ;
	}
	if(y+1<m)
		DFS(x,y+1) ;
	if(x-1>=0)
		DFS(x-1,y) ;
	if(y-1>=0)
		DFS(x,y-1) ;

}

int main(){
	std::ios_base::sync_with_stdio (false);
	long long t ,x,y,z,i,j,k ,l,p,f ;
	slld(n) ;
	slld(m) ;
	a.resize(n) ;
	FOR(i,n)
		a[i].resize(m) ;
	visited.resize(n) ;
	FOR(i,n)
		visited[i].resize(m,0) ;
	FOR(i,n)
		FOR(j,m)
			sd(a[i][j]) ;	

	
	DFS(0,0) ;
	if(flag==1)
		cout<<"Yes" ;
	else
		cout<<"No" ;


	return 0 ;
}
