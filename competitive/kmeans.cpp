
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
long long a[]={1,4,3,2,5,6,7} ;
float c[]={1.0,2.0} ;
long long iter=10 ;
long long s[100] ;
long long idx[]={-1,-1,-1,-1,-1,-1,-1} ;
long long k,n ;

void findclosestcentroids(){

long long i , j,mi,d ;
FOR(i,7){
        mi=1e9;
    FOR(j,2){
        d=fabs(a[i]-c[j]) ;
        if(d<mi){
            mi=d ;
            idx[i]=j ;
        }

    }
}

}
void computecentroids(){
long long i ;
FOR(i,k){
    s[i]=0 ;
    c[i]=0 ;
}
FOR(i,n){
    c[idx[i]]+=a[i] ;
    s[idx[i]]++ ;
}
FOR(i,k)
c[i]=c[i]/s[i] ;


}
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,x,y,z,i,j ,l,m,p,f ;

k=2 ;
n=7 ;


FOR(i,iter){
findclosestcentroids()  ;
//FOR(i,n)
//cout<<idx[i]<<" " ;
//cout<<"\n" ;
computecentroids() ;
FOR(j,k){
cout<<c[j]<<" ";}
cout<<"\n" ;

}

return 0 ;
}
