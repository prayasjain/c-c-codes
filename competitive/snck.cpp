
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

#define maxn  100001

#define inv2 500000004

#define mod 1000000007
long long min( long long x , long long y){
	if(x>y)
		return y ;
	return x ;
}
long long max( long long x , long long y){
	if(x>y)
		return x ;
	return y ;
}

int main(){
	std::ios_base::sync_with_stdio (false);
	long long t ,a,b,c,d ;
	slld(t) ;
	while(t--){
		slld(a) ;
		slld(b) ;
		slld(c) ;
		slld(d) ;
		long long diff = llabs(a-b) ;
		long long div  ;
		if(c>d){
			div = c%d ;
			div = min(div,min(c,d)*ceil((double)max(c,d)/min(c,d))-max(c,d)) ;
		} else if(c<d){
			div = d%c ;

			div = min(div,min(c,d)*ceil((double)max(c,d)/min(c,d))-max(c,d)) ;
		}else {
			div = min(c,d) ;
		}
		
		if(div==0){
			div = min(c,d) ;
		}
		plldn(min(diff%div,div*ceil((double)diff/div)-diff)) ;


	}
	return 0 ;
}
