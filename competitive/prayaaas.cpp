
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
#define pb(x) push_back(x)
#define inv2 500000004
#define mod 1000000007
//getline(cin, my_string, '\n');
long long a[1003][1003],rc[1003][1003],cc[1003][1003],cum[1003][1003],s[1003][1003],cpy[1003][1003] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
slld(m) ;
p=0 ;
FOR(i,n){
    FOR(j,m){
        slld(x) ;
        if(x==0)
            a[i][j]=1 ;
        else{
            p++ ;
            a[i][j]=-1 ;
        }

    }
}
f= -2 ;
FOR(i,n){
    y=0 ;
    FOR(j,m){
        f=max(f,a[i][j]) ;
        rc[i][j]=y ;
        y=y+a[i][j] ;
        cpy[i][j]=a[i][j] ;
    }
}
if(f==-2){
    plldn(p-1);
    return 0 ;
}
FOR(j,m){
    y=0 ;
    FOR(i,n){
        cc[i][j]=y;
        y=y+a[i][j] ;
    }
}


for(k=2;k<=min(n,m);k++){
    FOR(i,n){
        FOR(j,m){
        if(i<k-1||j<k-1){
            s[i][j]=a[i][j] ;
           // ps("*") ;
        }

        if(i>=k-1&&j>=k-1){
            s[i][j]=rc[i][j]+cc[i][j]-rc[i][j-k+1]-cc[i-k+1][j]+a[i-1][j-1]+cpy[i][j] ;
            //ps("&");
            k*k-s[i][j] ;
        }
        f=max(f,s[i][j]) ;

    }
    //psn("");
    }
    FOR(i,n){
        FOR(j,m){
        a[i][j]=s[i][j] ;
        //plld(s[i][j]);
        //ps(" ") ;
        }
        //psn("") ;
    }
    //psn("") ;

}
plldn(f+p) ;

return 0 ;
}
