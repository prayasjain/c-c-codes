
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007
string s ;
long long power(long long x, long long p , long long m){
    if(p==1)
        return x%m ;
    if(p==0)
        return 1 ;
    long long temp= power(x,p/2,m) ;
    if(p%2)
        return ((temp*temp)%m*x)%m;
    return (temp*temp)%m;

}

int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,a,b ;
//cout<<power(66520193,122285375,mod);
slld(t);
getchar() ;

while(t--){
getline(cin,s) ;
a=0 ;
b=0 ;
//cout<<s[1] ;
for(i=0;s[i]!=' ';i++){
a=(a*10+s[i]-'0')%mod  ;

}
i++ ;

for(;i<s.size();i++){
b=(b*10+s[i]-'0')%(mod-1)  ;
}

plldn(power(a,b,mod)) ;

}

return 0 ;
}
