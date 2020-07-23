

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
long long a[maxn],n ;
long long h[maxn],cu[maxn]  ;
long long ob=0,ri=0,ac=0 ;
void fun (long long i, long long j){
    long long x=a[i],y=a[j] ;
    long long f=0 ;
    long long f1,f2,f3 ;
    long long tot= cu[min(x+y,a[n-1]+1)]-cu[min(y+1,a[n-1]+1)] ;
    if(tot==0)
        return ;
    f1=cu[min(x+y,a[n-1]+1)]-cu[min((long long)floor(sqrt(x*x+y*y))+1,a[n-1]+1)] ;
    if(ceil(sqrt(x*x+y*y))==floor(sqrt(x*x+y*y))&&h[(long long)sqrt(x*x+y*y)]==1)
    {
        f=1 ;
        ri++ ;
    }

        ac=ac+tot-f1 ;
        ob+=f1 ;
        if(f==1)
            ac-- ;
}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
FOR(i,n){
    slld(a[i]) ;
    h[a[i]]=1 ;
}
for(i=0;i<=a[n-1]+1;i++){
    if(h[i]==1)
        cu[i+1]=cu[i]+1 ;
    else
        cu[i+1]=cu[i] ;
}

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){

            fun(i,j) ;
            //cout<<a[i]<<" "<<a[j]<<"\n" ;
            //cout<<ac<<" "<<ri<<" "<<ob<<"\n" ;
    }
}
cout<<ac<<" "<<ri<<" "<<ob ;
return 0 ;
}

