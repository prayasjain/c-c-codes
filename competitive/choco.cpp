
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

#define maxn  1000003

#define inv2 500000004

#define mod 1000000007

long long dp[maxn] ;
char s[maxn] ;	
bool okay(char x, char y, char z){
	if(x==y && x==z)
		return false;
	return true ;
}	

int main(){
	std::ios_base::sync_with_stdio (false);
	long long t,mx,size,i ;
	string s ;
	slld(t);
	while(t--){

		getline(cin,s,'\n');
		//scanf("%s",s);
		dp[0]=0 ;
		dp[1]=0;
		dp[2]=0 ;
		mx=0;
		for(i=0;s[i]!='\0';i++){
			continue ;
		}
		size=i ;
		plldn(size) ;
		for (long long i = 3; i <= size; ++i)
		{
			if(okay(s[i-1],s[i-2],s[i-3])){
				dp[i]=dp[i-3]+3 ;
				mx=max(mx,dp[i]) ;
			}
			
		}
		plldn(size-mx) ;
	}
	return 0 ;
}
