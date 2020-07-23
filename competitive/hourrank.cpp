

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
//getline(cin,s) ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--){

	slld(n) ;
	vector < pair < long long , long long > > vec ;
	FOR(i,n){
		slld(x) ;
		vec.pb(make_pair(x,i)) ;
	}
	sort(vec.begin(),vec.end()) ;
	x=n ;
	k=0 ;
	for(i=n-1;i>=0;i--){
		if(vec[i].second>x){
			continue ;
		}else {
			x = vec[i].second ;
			k++ ;
			if(x==0) break ;
		}
	}
	if(k%2)
		cout<<"ANDY\n" ;
	else
		cout<<"BOB\n" ;
	

}
return 0 ;
}

