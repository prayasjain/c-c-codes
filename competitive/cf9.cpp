#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<ctype.h>
#include<algorithm>
using namespace std ;
int main(){
long long t=0 ,n,z,i,j,k ,l,m,p ;
long long x[101],y[101] ;
slld(n);
for(i=0;i<n;i++){
    slld(x[i]) ;

}
if(n==1){
    printf("1") ;

}
else {
sort(x,x+n) ;
p=n-2 ;
long long suml=0 ,sumr=x[n-1],ans=1 ;
for(j=0;j<=p;j++){
        suml=suml+x[j];
    }
for(;p>=0;p--){

    if(suml<sumr){

        break ;

    }
    else {
            suml=suml-x[p] ;
            sumr=sumr+x[p];
            ans++ ;

    }
}
printf("%lld",ans) ;
}
return 0 ;
}
