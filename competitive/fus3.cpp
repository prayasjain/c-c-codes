

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

int main(){
//std::ios_base::sync_with_stdio (false);
int t ,n,y,z,i,j,k ,l,m,p,f,a[501][501],ans[501],cmax=0 ;
char x[1024] ;
sd(n);
sd(m) ;
for(i=0;i<n;i++){
    ss(x) ;
    ans[i]=0 ;
    for(j=0;j<m;j++){
        a[i][j]=x[j]-'0' ;
        if(a[i][j]==1){
            ans[i]++ ;
        }
    }

}
/*for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        pd(a[i][j]) ;
    }
    psn("") ;
}*/

sd(t) ;
while(t--){
    sd(l) ;
    sd(m) ;
    if(a[l-1][m-1]==0)
        {
            a[l-1][m-1]=1 ;
            ans[l-1]++ ;

        }
    else
    {
        a[l-1][m-1]=0 ;
        ans[l-1]-- ;
    }
   // for(i=0;i<n;i++){
   // cout<<ans[i]<<" " ;
//}
//cout<<"\n" ;

}
cmax=0 ;
f=0 ;
for(i=1;i<n;i++){
    if(ans[i]>ans[cmax]){
        f=0 ;
        cmax=i ;
    }
    else if(ans[i]==ans[cmax]){
        f=1 ;
    }
}
if(f==1)
    psn("Tie") ;
else
    pdn(cmax+1) ;

return 0 ;
}

