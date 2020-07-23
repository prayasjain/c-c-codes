#include<stdio.h>
#include<algorithm>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
using namespace std ;
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,a[100001] ;
slld(t) ;
while(t--){
    slld(n) ;
    for(i=0;i<n;i++){
        slld(a[i]) ;

    }
    sort(a,a+n) ;
    if(a[0]<2){
        printf("-1\n") ;
    }
    else{
            x=2 ;
    for(i=1;i<n;i++){
        x=x+a[i] ;

    }
    printf("%lld\n",x) ;
    }
}
return 0 ;
}


