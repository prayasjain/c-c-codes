#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100009
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

long u[maxn],l[maxn] ;
long ans[maxn] ;
vector<long> f ;
int main(){

long  n,m,i,x,csum,j,k ;
long c ;
sld(n) ;
sld(m) ;
sld(c) ;
for(i=0;i<maxn;i++){
    u[i]=0 ;
    l[i]=0 ;
    ans[i]=0 ;
}
FOR(i,n){
    sld(x) ;
    u[x-1]++ ;
}
FOR(i,m){
    sld(x) ;
    l[x-1]++ ;
}
for(i=0;i<100009;i++){
    if(u[i]==0||l[i]==0)
        continue ;
        else
            f.push_back((l[i]*u[i])) ;

}
//initialize(min(n,m)) ;
//csum=0 ;
ans[0]=1 ;
for(i=0,k=1;i<f.size();i++,k++){

    long temp=ans[0],temp2 ;
    j=1 ;
    while(1){

        if(j>k)
            break ;
        else {

            temp2=ans[j] ;
            ans[j]=(ans[j]+temp*f[i])%(1000000000+7) ;
            temp=temp2 ;
        }
        j++ ;
    }
}
for(i=2;i<2+c;i++)
    printf("%ld ",ans[i]) ;
return 0 ;
}
