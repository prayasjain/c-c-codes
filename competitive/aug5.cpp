

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
struct o {
    long val ;
    long lb ;
    long ub ; //both included


};
o a[maxn] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long t ,n,x,y,z,i,j,k ,l,m,p,f,h,c ;
sld(t) ;
while(t--){
    sld(n) ;
    sld(h) ;
    //pldn(n) ;
    //pldn(h) ;
    c=0 ;
    for(i=0;(i+h)<=n;i++){

        a[i].val=0 ;
        a[i].lb=i ;
        a[i].ub=i+h-1 ;
    }
    c=i ;
    for(j=0;j<n;j++){
        sld(x) ;
        sld(y) ;
        for(i=max((long)0,i-h+1);i<=y;i++){
            if(i>=x&&a[i].ub<=y) //subarray completely inside interval
                a[i].val+=h;
            else if(x>i&&y<a[i].ub){
                a[i].val+=(y-x+1) ;
            }
            else if (x>=i&&a[i].ub<=y){
                a[i].val+=(a[i].ub-x+1) ;
            }
            else if(i>=x&&a[i].ub>=y){
                a[i].val+=(y-i+1) ;
            }      //
        }

    }
    m=0 ;
    for(i=0;i<c;i++){
        m=max(m,a[i].val) ;

    }
    cout<<(n*h-m)<<"\n" ;
   /* for(i=0;i<n;i++){
        pld(a[i]) ;
        ps(" ") ;
    } */

}
return 0 ;
}
