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
long long a[100000] ;
slld(t) ;
while(t--){
	slld(n) ;
	m = -1;
	
	FOR(i,n){
		slld(a[i]) ;
		if(m==-1) m = a[i] ;
		else m = min(a[i],m) ;
	} 
	long long ans = 0  ;
	FOR(i,n){
		a[i] = a[i]-m ;
		ans += a[i]/m + a[i]/2 + a[i]%2 ;

	}
	plldn(ans) ;
}
return 0 ;
}