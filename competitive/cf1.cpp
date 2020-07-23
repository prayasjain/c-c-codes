#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<math.h>

int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ,a[100001];
slld(n) ;
slld(k);
for(i=0;i<n;i++){
    slld(a[i]) ;
}
if(a[0]==0)
    printf("0") ;
else {
    if(a[k-1]==0){
        for(i=k-2;i>=0;i--){
            if(a[i]>0){
                printf("%lld",i+1);
                break ;
            }
        }
    }
    else{
        for(i=k;i<n;i++){
            if(a[i]!=a[k-1]){
                printf("%lld",i);
                break ;
            }

        }
        if(i==n)
            printf("%lld",n);
    }
}

return 0 ;
}
