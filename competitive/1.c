
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


int main(){
	std::ios_base::sync_with_stdio (false);
	long long t ,n,x,y,z,i,j,k ,l,m,p,f ;

	return 0 ;
}

long long gcd(long long a,long long b){
    if(b>a) return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}

//gcd (a,b) == gcd(a+b,b) == gcd(a-b,b)
bool objcompare(obj lhs, obj rhs) { return lhs.val > rhs.val; }
sort(b,b+n,objcompare) ;
stable_sort(a,a+n) //preveserves order for equal vslues
//getline(cin, s, '\n');