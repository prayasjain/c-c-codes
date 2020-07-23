

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
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
int a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,f ;
long long p ;
sd(n) ;
sd(k) ;
FOR(i,n){
    sd(a[i]) ;

}
p=0 ;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]%a[j]==k||a[j]%a[i]==k)
                p++ ;
    }
}
cout<<pow(2,n)-1-(p*pow(2,n-2)) ;
return 0 ;
}
