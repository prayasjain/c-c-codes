
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
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
#define bitcount __builtin_popcountll
#define ll long long

#define mod 1000000007
//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;
long long a[501][501],s[501][501],csum[501][501],rsum[501][501]ind[501][501] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,pos ;
slld(n) ;
slld(m) ;
FOR(i,n){
    p=0 ;
    FOR(j,n){
        s[i][j]=-2 ;
        ind[i][j]=0 ;
        slld(a[i][j]) ;
        if(a[i][j]==1)
            a[i][j]=-1 ;

        else
            a[i][j]=1 ;
        rsum[i][j]=p ;
        p=p+a[i][j] ;
    }
}
FOR(j,m){
    p=0 ;
FOR(i,n){
    csum[i][j]=p ;
    p=p+a[i][j] ;
}
}
for(k=2;k<=min(n,m);k++){
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i<=(k-2)||j<=(k-2)){
                s[i][j]=a[i][j] ;

            }
            else {
                if((a[i][j]+a[i][j-1]+a[i-1][j]+a[i-1][j-1])>a[i][j] )
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j]=s[i][j] ;
        }
    }
    FOR(i,n){
FOR(j,n)
{
    plld(s[i][j]) ;
    ps(" ");
}
psn("");
}
}


return 0 ;
}
