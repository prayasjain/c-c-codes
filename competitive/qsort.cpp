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
int a[1001],n ;

void quickSort(int s ,int e){
if(e<=s)
    return ;
int b[1001] ;
int c [1001] ;
int lb=-1 ;
int lc=-1,i ;
int p = a[s] ;
for( i = s+1;i<=e;i++){
    if(a[i]>p){
        lc++ ;
        c[lc]= a[i] ;
    }
    else {
        lb++ ;
        b[lb]=a[i] ;
    }
}
    long long j=s ;
    for(i=0;i<=lb;i++)
    {
        a[j]=b[i] ;
        j++ ;
    }
    a[j]=p ;
    j++ ;
for(i=0;i<=lc;i++)

    {
    a[j]=c[i] ;
    j++ ;
}
   quickSort(0,lb) ;
quickSort(lb+2,lb+2+lc) ;


    for(i=s;i<=e;i++)
    printf("%lld ",a[i]) ;
    printf("\n") ;


}


int main(){
std::ios_base::sync_with_stdio (false);
long long t ,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
for(i=0;i<n;i++)
    slld(a[i]) ;
quickSort(0,n-1) ;

int c,d ;

 for (c = 1 ; c <= n - 1; c++) {
    d = c;

    while ( d > 0 && a[d] < a[d-1]) {
      t          = a[d];
      a[d]   = a[d-1];
      a[d-1] = t;
        sw-- ;
      d--;
    }
  }
  plld(sw) ;


return 0 ;
}
