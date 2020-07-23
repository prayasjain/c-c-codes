#include<stdio.h>
#define slld(x) scanf("%d",&x)

int main(){
     int te,n,i,m,t,j,x ;
    int arr[200] ;
    slld(te) ;
    while(te--){
        slld(n) ;
        for(i=0;i<200;i++){
            arr[i]=0 ;
        }
        arr[0]=1 ;
        m=1 ;
        for(i=2;i<=n;i++){
            t=0;
            for(j=0;j<m;j++){
                x=arr[j]*i+t ;
                arr[j]=x%10 ;
                t=x/10 ;
            }
            while(t!=0){
                arr[m++]=t%10 ;
                t=t/10 ;
            }
        }
        for(i=m-1;i>=0;i--){
            printf("%d",arr[i]) ;
        }
        printf("\n") ;




    }
return 0 ;}
