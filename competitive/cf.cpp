#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n) for(i=0;i<n;i++)
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
#define f first
#define s second
#define maxn  100004

#define inv2 500000004

#define mod 1000000007

long long a[400][400] ;

int main(){
	//std::ios_base::sync_with_stdio (false);
	long long t ,n,x,y,z,i,j,k ,l,m,p,h ;
	slld(n) ;
	slld(m) ;
	slld(p) ;
	z=0 ;
	vector<pair<long long, long long> > v[p+1];
	vector<long long>dist[p+1];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++) {
			slld(x) ;
			a[i][j]=x ;
			v[x].pb(make_pair(i,j)) ;
			dist[x].pb(z) ;
		}

	}
	if(p==1){

		plldn(z) ;
		return 0 ;
	}
	if(p==2){
		long long ap=0 ;
		if(a[1][1]==1){
			
			for(i=1;i<=n;i++){
				for(j=1;j<=m;j++){
					if(ap==0 && a[i][j]==2)
						ap =  j-1 + i-1 ;
					else if(a[i][j]==2)
						ap = min(ap,i+j-2) ;
				}
			}
		}
		else {
					for(i=1;i<=n;i++){
				for(j=1;j<=m;j++){
					if(ap==0 && a[i][j]==1){
						
						ap =  j+ i-2 ;
						//cout<<i<<" "<<j<<" "<<ap<<"\n" ;
						
					}
					else if(a[i][j]==1){
						ap = min(ap,i+j-2) ;
						//cout<<i<<" "<<j<<" "<<ap<<"\n" ;
						
					}
				}
			}
			ap=ap+1 ;
		}
		plldn(ap) ;
		return 0 ;
	}
	for(i=1;i<=p;i++){
		for(j=0;j<v[i].size();j++){
			if(i==1) {
				dist[i][j] = abs(v[i][j].f -1) + abs(v[i][j].s -1) ;
			}
			else{
				for(k=0;k<v[i-1].size();k++){
					if(dist[i][j]==0)
						dist[i][j] = abs(v[i][j].f - v[i-1][k].f) + abs(v[i][j].s - v[i-1][k].s) + dist[i-1][k] ;
					else
						dist[i][j] = min(dist[i][j] ,abs(v[i][j].f - v[i-1][k].f) + abs(v[i][j].s - v[i-1][k].s) + dist[i-1][k] ) ;
				}
			}

		}
		if(i==1)
			continue ;
		for(j=0;j<v[i].size();j++){
			for(k=0;k<v[i].size();k++){
				if(j==k)
					continue ;
				dist[i][j] = min(dist[i][j],dist[i][k] + abs(v[i][j].f-v[i][k].f)+ abs(v[i][j].s-v[i][k].s) ) ;
			}
		}
	}
	long long ans = INT_MAX ;
	for(j=0;j<v[p].size();j++){
		ans = min(ans,dist[p][j]) ;
	}
	plldn(ans) ;
	return 0 ;
}


