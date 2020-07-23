#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)


int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,a[100001] ;
slld(t) ;
while(t--){
    slld(n) ;

    x=0 ;
    for(i=0;i<n;i++){
        slld(a[i]);
        if(i==0){
            x=a[i] ;

        }
        else{
            if(a[i]>a[i-1]){
                x=x+a[i]-a[i-1] ;
            }
        }
    }
    printf("%lld\n",x);
}
return 0 ;
}
