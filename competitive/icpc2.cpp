

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
long long a[101][100001],l[101],s[101],e[101] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t,sm,sl ,n,x,y,z,i,j,k ,m,p,f,mn,f1,f2,ans=-1 ;
slld(n) ;
slld(m) ;
sm=0 ;
sl=0 ;
for(i=0;i<n;i++){
    slld(l[i]) ;
    sl+=l[i] ;
    s[i]=0 ;
    e[i]=l[i]-1 ;
    for(j=0;j<l[i];j++){
        slld(a[i][j]) ;
        sm+=a[i][j] ;
    }
}
while(sl>=0){
    mn=1e11 ;
    f1=0 ;
    f2=0 ;
    for(i=0;i<n;i++){
        if(s[i]>e[i])
            continue ;
        else {
            if(mn>a[i][s[i]]){
                mn=a[i][s[i]] ;
                f1=i ;
                f2=0 ;
            }
            if(mn>a[i][e[i]]){
                mn=a[i][e[i]] ;
                f1=i ;
                f2=1 ;
            }

        }
    }
    sm=sm-mn ;
    if(f2==0)
    {
        s[f1]++ ;
    }
    else {
        e[f1]-- ;
    }
    sl-- ;
    if(sl<=m){
        ans=max(ans,sm) ;
       // cout<<ans<<" " ;
    }


}
cout<<ans ;
return 0 ;
}
